#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

/**
 * Realizacja operacji
 * 
 * @param a: int Liczba dla której realizujemy operacje
 * @param b: int Liczba dla której realizujemy operacje
 * @param znak: char Operator matematyczny
 * @return wynik operacji
*/
int wyk_dzialanie(int a, int b, char znak)
{
    switch (znak){
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            break;
    }
    cout << znak << " nie jest obsługiwanym operatorem";
    return 0;
}

/**
 * Sprawdza czy podany znak to liczba
 * 
 * @param znaki: string Znak do sprawdzenia
 * @return bool, true dla liczby, w innym wypadku false
*/
bool czy_liczba(string znaki){
    for (auto znak: znaki) {
        if (!isdigit(znak))
            return false;
    }

    return true;
}


/**
 * Obsługa wyrażenia ONP i realizacja obliczeń
 * 
 * @param wyr_onp Wyrażenie matematyczne zapisane w ONP
 * @return wynik obliczeń
*/
int oblicz_ONP(string wyr_onp)
{
    int a, b, wynik, liczba;
    stack <int> stos;
    stringstream wyr(wyr_onp);

    string znaki;

    while (wyr >> znaki)
    {
        if (czy_liczba(znaki))
        {

            liczba = stoi(znaki);
            stos.push(liczba);
        }
        else {
            b = stos.top();
            stos.pop();
            a = stos.top();
            stos.pop();
            // znaki[0] aby string "+" -> char '+';
            wynik = wyk_dzialanie(a, b, znaki[0]);
            stos.push(wynik);
        }
    }
    return stos.top();
}

int main()
{
    string wyr_onp = "2 7 + 3 / 14 3 - 4 * + 2 /";
    cout << "\n\r";
    cout << "Wynik to: " << oblicz_ONP(wyr_onp) <<endl;
}
