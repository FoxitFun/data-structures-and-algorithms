#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &numbers, int left, int right, int to_find)
{
    int mid = (left + right) / 2;
    // Przypadek brzegowy #1 - znaleziono poszukiwany element:
    if (to_find == numbers.at(mid))
    {
        return mid;
    }
    // Przypadek brzegowy #2 - brak poszukiwanego elementu w wektorze:
    if (right < left)
    {
        return -1;
    }

    // Wywołania rekurencyjne:
    // Przypadek #1: Jeśli poszukiwany element jest mniejszy niż element środkowy,
    // przesuń prawą granicę.
    if (to_find < numbers.at(mid))
    {
        return binarySearch(numbers, left, mid - 1, to_find);
    }
    // Przypadek #2: Jeśli poszukiwany element jest większy niż element środkowy,
    // przesuń lewą granicę.
    else
    {
        return binarySearch(numbers, mid + 1, right, to_find);
    }
}

void printVector(vector<int> &numbers)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << ", ";
    }

    cout << endl;
}

int main()
{
    vector<int> my_numbers = {1, 2, 5, 8, 9, 11, 15, 20};
    printVector(my_numbers);

    int find = 8;
    int result = binarySearch(my_numbers, 0, my_numbers.size() - 1, find);
    
    cout << "Liczba " << find << " znajduje się na idx= " << result << endl;
    return 0;
}
