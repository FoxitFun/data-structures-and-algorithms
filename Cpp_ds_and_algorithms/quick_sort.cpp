#include <iostream>

using namespace std;

/**
 * Funkcja rekuręcyjna, która sortuje tablicę algorytmem quick sort.
 * @param tab tablica do posrtowania.
 * @param left idx pierwszego elementu tablicy/sub-tablicy.
 * @param mid idx środkowego elementu tablicy/sub-tablicy.
 * @param right idx ostatniego elementu tablicy/sub-tablicy.
 */
void quickSort(int tab[], int left, int right)
{
    int pom;
    // Przypadek bazowy: jeśli podtablica ma 1 lub 0 elementów, jest już posortowana
    if (left >= right)
    {
        // 'return;' służy do zakończenia działania funkcji typu void
        return;
    }

    // Wybierz element środkowy jako pivot
    int pivot = tab[(left + right) / 2];

    int i = left;
    int j = right;

    // Podziel tablicę
    while (i <= j)
    {
        // Znajdź liczbę większą lub równą pivot z lewej strony, potem przerwij pętlę
        while (tab[i] < pivot)
        {
            i++;
        }
        // Znajdź liczbę mniejszą lub równą pivot z prawej strony, potem przerwij pętlę
        while (tab[j] > pivot)
        {
            j--;
        }
        if (i <= j)
        {
            // Zamień miejscami tab[i] i tab[j]
            pom = tab[i];
            tab[i] = tab[j];
            tab[j] = pom;
            // zamiana(tab[i], tab[j])

            // Przesuń indeksy w kierunku środka <- nie jest to konieczne, ale nieco poprawia kod
            i++;
            j--;
        }
    }

    // Rekurencyjnie posortuj lewą i prawą część tablicy
    if (left < j)
    {
        quickSort(tab, left, j);
    }
    if (i < right)
    {
        quickSort(tab, i, right);
    }
}

/**
 * Funkcja drukująca zawartość tablicy.
 * @param tab tablica, którą chcemy wydrukować.
 * @param len długosc tablicy.
 */
void printTab(int tab[], int len)
{
    for(int i=0; i<len; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
}

int main()
{
    int my_tab[] = {2, 5, 1, 3, 4, 0, 6, 2, 5};
    int tab_len = sizeof(my_tab)/sizeof(my_tab[0]);

    int lewy = 0;
    int prawy = tab_len-1;

    cout << "Oryginalna tablica: ";
    printTab(my_tab, tab_len);

    quickSort(my_tab, lewy, prawy);

    cout << "Posortowana tablica: ";
    printTab(my_tab, tab_len);
    return 0;
}
