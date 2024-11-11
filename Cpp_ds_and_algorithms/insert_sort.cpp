#include <iostream>

using namespace std;

/**
 * Funkcja realizująca sortowanie przez wstawianie.
 * @param tab tablica do posrtowania.
 * @param len długosc tablicy.
 */
void insertionSort(int tab[], int len) 
{
    for (int i = 1; i < len; i++) {
        int key = tab[i];
        int j = i - 1;

        // Przesuwanie elementów większych od key w prawo
        while (j >= 0 && tab[j] > key) {
            tab[j + 1] = tab[j];
            j = j - 1;
        }

        // Wstawienie key w odpowiednie miejsce
        tab[j + 1] = key;
    }
}

/**
 * Funkcja drukująca zawartość tablicy.
 * @param tab tablica, którą chcemy wydrukować.
 * @param len długosc tablicy.
 */
void printTab(int tab[], int len)
{
    for (int i=0; i<len; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
}

int main()
{
    int numbers[] = {23, 1, 12, -24, 0};
    int tab_len = sizeof(numbers)/sizeof(numbers);

    insertionSort(numbers, tab_len);
    printTab(numbers, tab_len);
    
    return 0;
}
