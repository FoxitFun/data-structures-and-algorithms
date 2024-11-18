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
 * Funkcja countingSort() sortuje tablicę arr używając algorytmu sortowania metodą zliczania.
 * 
 * @param arr - Tablica do posortowania.
 * @param n - Liczba elementów w tablicy.
 */
void countingSort(int arr[], int n) {
    // Znajdowanie zakresu wartości w tablicy
    int minElement = arr[0];
    int maxElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Zakres całej tablicy
    int range = maxElement - minElement + 1;

    // Tablica do zliczeń
    int count[range] = {0};

    // Zliczanie wystąpień każdej liczby w tablicy
    for (int i = 0; i < n; i++) {
        count[arr[i] - minElement]++;
    }

    // Nadpisywanie oryginalnej tablicy posortowanymi wartościami
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            arr[index] = i + minElement;
            index++;
            count[i]--;
        }
        // printTab(arr, range);
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


