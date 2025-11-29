#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

/**
 * Sprawdzanie priorytetu operatorów
 * 
 * @param op matematyczny operator
 * @return priorytet operatora, 0 oznacza operator nieobsługiwany
*/
int priorytet(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

/**
 * Konwersja INFIX -> ONP
 * (ONP - Odwrócona Notacja Polska z ang. RPN - Revers Polish Notation)
 * Użyty algorytm: uproszczony Shunting Yard
 *
 * @param expr Wyrażenie zapisane w postaci infix tj. (2+3) * 2
 * @return Wyrażenie zapisane w postaci postfix (ONP)
*/
string infix_to_rpn(const string& expr) {
    stack<char> s;
    string wynik = "";

    for (size_t i = 0; i < expr.size(); i++) {
        char c = expr[i];

        if (c == ' ') continue; // pomijamy spacje

        // --- liczba wielocyfrowa ---
        if (isdigit(c)) {
            string liczba = "";
            liczba += c;

            // jeśli kolejne znaki są cyframi – dodajemy je
            while (i + 1 < expr.size() && isdigit(expr[i + 1])) {
                liczba += expr[i + 1];
                i++;
            }

            wynik += liczba + " ";
        }
        // --- nawias otwierający ---
        else if (c == '(') {
            s.push(c);
        }
        // --- nawias zamykający ---
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                wynik += s.top();
                wynik += " ";
                s.pop();
            }
            s.pop(); // usuń '('
        }
        // --- operator ---
        else {
            while (!s.empty() && priorytet(s.top()) >= priorytet(c)) {
                wynik += s.top();
                wynik += " ";
                s.pop();
            }
            s.push(c);
        }
    }

    // zdejmujemy pozostałe operatory
    while (!s.empty()) {
        wynik += s.top();
        wynik += " ";
        s.pop();
    }

    return wynik;
}

/** 
 * Konwersja ONP -> INFIX
 * Używamy stosu stringów. Za każdym razem gdy znajdziemy operator,
 * zdejmujemy dwa ostatnie wyrażenia i łączymy je w jeden "(a op b)".
 *
 * @param expr: string Wyrażenie matematyczne zapisane jako postfix (ONP) 
 * @return string z wyrażeniem zapisanym w formie infix.
*/
string rpn_to_infix(const string& expr) {
    stack<string> s;
    string token;
    stringstream ss(expr);

    while (ss >> token) {
        // jeśli token jest liczbą
        if (isdigit(token[0])) {
            s.push(token);
        }
        // operator
        else {
            string b = s.top(); s.pop();
            string a = s.top(); s.pop();

            string nowy = "(" + a + token + b + ")";
            s.push(nowy);
        }
    }

    return s.top();
}

int main() {
    int wybor;
    cout << "Wybierz tryb:\n";
    cout << "1 - INFIX -> RPN\n";
    cout << "2 - RPN -> INFIX\n";
    cout << "Twoj wybor: ";
    cin >> wybor;

    cin.ignore(); // usuwamy zalegający ENTER

    string expr;
    cout << "Podaj wyrazenie: ";
    getline(cin, expr); // pobranie danych ze strumienia cin

    if (wybor == 1) {
        cout << "RPN: " << infix_to_rpn(expr) << endl;
    } 
    else if (wybor == 2) {
        cout << "INFIX: " << rpn_to_infix(expr) << endl;
    } 
    else {
        cout << "Niepoprawny wybor." << endl;
    }

    return 0;
}
