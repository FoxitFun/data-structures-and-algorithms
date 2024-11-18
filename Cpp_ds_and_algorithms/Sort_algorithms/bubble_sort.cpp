#include <iostream>

using namespace std;

/**
 * Funkcja realizująca sortowanie bąbelkowe.
 * @param tab tablica do posrtowania.
 * @param len długosc tablicy.
 */
void bubbleSort(int tab[], int len) 
{
    for (int i = 0; i < len - 1; i++) 
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                // Zamiana miejscami gdy aktualny element jest większy od następnego
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
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
    int tab_len = sizeof(numbers)/sizeof(numbers[0]);
    cout << "Przed sortowaniem: "<<endl;
    printTab(numbers, tab_len);

    bubbleSort(numbers, tab_len);
    cout << "Po sortowaniu: "<<endl;
    printTab(numbers, tab_len);
    return 0;
}
