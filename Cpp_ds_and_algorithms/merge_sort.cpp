#include <iostream>

using namespace std;

// tablica pomocnicza - jest def. jako zmienna globalna
int pom[1000]; // dł. musi być >= dł. tab[] przekazanej do funkcji.

/**
 * Funkcja scalająca dwie posortowane podtablice.
 * Funkcja ta jest wywoływana przez funkcję sortByMerge()
 * @param tab tablica do posrtowania.
 * @param left idx pierwszego elementu tablicy/sub-tablicy.
 * @param mid idx środkowego elementu tablicy/sub-tablicy.
 * @param right idx ostatniego elementu tablicy/sub-tablicy.
 */
void merge(int tab[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;

    // Skopiuj zawartość tablicy tab[] do tablicy pom[]
    // Operując na pom[index], zamiast tab[index] unikamy utraty danych przy podmianie
    for (int i = left; i <= right; i++)
    {
        pom[i] = tab[i];
    }

    // Scalanie dwóch posortowanych podtablic:
    for (int k = left; k <= right; k++)
    {
        if (i <= mid) // Sprawdź, czy nie wychodzimy poza lewą podtablicę
        {
            if (j <= right) // Sprawdź, czy nie wychodzimy poza prawą podtablicę
            {
                // Ustal kolejność rosnącą:
                if (pom[j] < pom[i])
                {
                    tab[k] = pom[j];
                    j++;
                }
                else
                {
                    tab[k] = pom[i];
                    i++;
                }
            }
            else // Jeśli prawa podtablica jest wyczerpana
            {
                tab[k] = pom[i];
                i++;
            }
        }
        else // Jeśli lewa podtablica jest wyczerpana
        {
            tab[k] = pom[j];
            j++;
        }
    }
}

/**
 * Funkcja rekuręcyjna, która sortuje tablicę algorytmem sortowania przez scalanie.
 * Funkcja ta rozbija tablice na sub tablice, po czym wywołuje funkcję merge()
 * do po scalenia elementów w posortowanej kolejnosci.
 * @param tab tablica do posrtowania.
 * @param left idx pierwszego elementu tablicy/sub-tablicy.
 * @param mid idx środkowego elementu tablicy/sub-tablicy.
 * @param right idx ostatniego elementu tablicy/sub-tablicy.
 */
void sortByMerge(int tab[], int left, int right)
{
    // Przypadek bazowy: jeśli podtablica ma 1 element, jest już posortowana
    if (right <= left)
    {
        return;
    }

    int mid = (right + left) / 2;

    // Rekurencyjnie podziel tablicę na część lewą i prawą:
    sortByMerge(tab, left, mid);
    sortByMerge(tab, mid + 1, right); // Powinno być mid + 1, aby uniknąć nakładania się zakresów

    // Połącz i posortuj podzielone części:
    merge(tab, left, mid, right);
}

/**
 * Funkcja drukująca zawartość tablicy.
 * @param tab tablica, którą chcemy wydrukować.
 * @param len długosc tablicy.
 */
void printTab(int tab[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
}

int main()
{
    int my_tab[] = {2, 5, 1, 3, 4, 0, 6, 2, 5};
    int tab_len = sizeof(my_tab) / sizeof(my_tab[0]);

    int left = 0;
    int right = tab_len - 1;

    cout << "Oryginalna tablica: ";
    printTab(my_tab, tab_len);

    // Wykonaj sortowanie przez scalanie
    sortByMerge(my_tab, left, right);

    cout << "Posortowana tablica: ";
    printTab(my_tab, tab_len);

    return 0;
}
