/**
 * @file selection_sort.cpp
 * @author FoxitFun (wojciechg03@gmail.com)
 * @brief Przykład sortowania z wykorzystaniem algorytmu Selection Sort
 * (sortowanie przez wybieranie)
 * @version 0.1
 * @date 2024-11-11
 * 
 */

#include <iostream>

using namespace std;

/**
 * @brief Implementacja sortowania przez wybieranie.
 * 
 * Funkcja selectionSort() sortuje tablicę arr używając algorytmu sortowania przez wybieranie.
 * 
 * @param arr - Tablica do posortowania.
 * @param n - Liczba elementów w tablicy.
 */
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        // Znajdowanie indeksu najmniejszego elementu w nieposortowanej części
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Zamiana miejscami znalezionego najmniejszego elementu z elementem na pozycji i
        std::swap(arr[i], arr[minIndex]);
    }
}

/**
 * Funkcja drukująca zawartość tablicy.
 * @param tab tablica, którą chcemy wydrukować.
 * @param len długosc tablicy.
 */
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
    const int tab_len = 5;
    int my_tab[tab_len] = {23, 1, 12, -24, 0};
    selectionSort(my_tab, tab_len);
    printTab(my_tab, tab_len);
    return 0;
}
