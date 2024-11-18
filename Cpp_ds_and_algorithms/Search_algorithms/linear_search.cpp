/**
 * @file linear_search.cpp
 * @author FoxitFun (wojciechg03@gmail.com)
 * @brief Przykłady algorytmu wyszukiwania liniowego
 * @version 0.1
 * @date 2024-11-12
 */

#include <iostream>

using namespace std;

/**
 * Funkcja wyszukująca idx poszukiwanej wartości to_find w tablicy tab.
 * Funkcja zwraca najmłodszy index.
 * Jeśli element nie występuję w tablicy, to funkcja zwraca -1.
 * 
 * @param tab - Tablica do posortowania.
 * @param len - Liczba elementów w tablicy.
 */
int findFirstIdxOf(int tab[], int len, int to_find)
{
    for (int i=0; i<len; i++)
    {
        if (tab[i] == to_find)
        {
            return i;
        }
    }

    return -1;
}

/**
 * Funkcja wyszukująca idx poszukiwanej wartości to_find w tablicy tab.
 * Funkcja zwraca najstarszy index.
 * Jeśli element nie występuję w tablicy, to funkcja zwraca -1.
 * 
 * @param tab - Tablica do posortowania.
 * @param len - Liczba elementów w tablicy.
 */
int findLastIdxOf(int tab[], int len, int to_find)
{
    for (int i=len-1; i>=0; i--)
    {
        if (tab[i] == to_find)
        {
            return i;
        }
    }

    return -1;
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
    int first_idx, last_idx;
    int my_tab[] = {10, 2, 33, 23, 1, 12, -24, 0, 3, 5, 1, 2, 0};

    int tab_len = sizeof(my_tab)/sizeof(my_tab[0]);

    printTab(my_tab, tab_len);

    int to_find = 2;

    first_idx = findFirstIdxOf(my_tab, tab_len, to_find);
    last_idx = findLastIdxOf(my_tab, tab_len, to_find);

    cout << "First idx for "<< to_find <<": "<< first_idx <<endl;
    cout << "Last idx for "<< to_find <<": " << last_idx << endl;

    return 0;
}
