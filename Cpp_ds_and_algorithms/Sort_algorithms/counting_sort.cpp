/**
 * @file counting_sort.cpp
 * @author FoxitFun (wojciechg03@gmail.com)
 * @brief Przykład sortowania z wykorzystaniem algorytmu Count Sort
 * (sortowanie przez zliczanie)
 * @version 0.1
 * @date 2024-11-11
 * 
 */

#include <iostream>

using namespace std;

/**
 * @brief Implementacja sortowania metodą zliczania.
 * 
 * Funkcja countingSort() sortuje tablicę tab używając algorytmu sortowania metodą zliczania.
 * 
 * @param tab - Tablica do posortowania.
 * @param n - Liczba elementów w tablicy.
 */
void countingSort(int tab[], int n) {
    // Znajdowanie zakresu wartości w tablicy
    int minElement = tab[0];
    int maxElement = tab[0];

    /* Szukamy najmniejszego i największego elementu w tablicy.
        Dzięki temu poznamy zakres wartości (od min do max),
        który później wykorzystamy do zbudowania tablicy zliczającej "count".*/
    for (int i = 1; i < n; i++) {            // Przechodzimy po wszystkich elementach tablicy, zaczynając od drugiego
        if (tab[i] < minElement) {           // Jeśli znaleziony element jest mniejszy niż aktualne minimum...
            minElement = tab[i];             //     zapisz go jako nowe minimum
        }
        if (tab[i] > maxElement) {           // Jeśli znaleziony element jest większy niż aktualne maksimum...
            maxElement = tab[i];             //     zapisz go jako nowe maksimum
        }
    }

    // Zakres całej tablicy
    int range = maxElement - minElement + 1;

    // Tablica do zliczeń - reprezentuje ile razy dana liczba występuje w sortowanej tablicy tab
    int count[range] = {0};

    // Zliczanie wystąpień każdej liczby w tablicy
    for (int i = 0; i < n; i++) {
        int liczba = tab[i];              // Pobierz aktualny element z tablicy
        int indeks = liczba - minElement; // Oblicz, gdzie w tablicy count go zapisać
        count[indeks]++;                  // Zwiększ licznik wystąpień tej liczby
    }

    // Nadpisywanie oryginalnej tablicy posortowanymi wartościami
    int index = 0;

    // Przechodzimy po całej tablicy 'count', która zawiera informacje,
    // ile razy występuje każda liczba z oryginalnej tablicy
    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            // Odtwarzamy oryginalną wartość liczby na podstawie indeksu i przesunięcia 'minElement'
            // (bo wcześniej odejmowaliśmy 'minElement', żeby indeksy w count zaczynały się od 0)
            tab[index] = i + minElement;

            // Przechodzimy do następnej pozycji w tablicy 'tab'
            index++;

            // Zmniejszamy licznik — oznacza to, że jedno wystąpienie tej liczby zostało już użyte
            count[i]--;
        }
        // printTab(tab, range);
    }
}

void printTab(int tab_p[], int len)
{
    for (int i=0; i<len; i++)
    {
        cout << tab_p[i] << ", ";
    }
    cout << endl;
}

int main()
{
    const int tab_len = 8;
    int my_tab[tab_len] = {12, 1, 1, 0, 0, 12, -24, 0};
    countingSort(my_tab, tab_len);
    printTab(my_tab, tab_len);
    return 0;
}


