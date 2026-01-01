#include <iostream>
#include <sstream>
#include <string>

using namespace std;

/**
 * @brief Program demonstruje konwersję liczby całkowitej
 *        na zapis tekstowy w różnych systemach liczbowych
 *        (16, 8 i 10) przy użyciu std::stringstream.
 *
 * Wykorzystuje manipulatory strumieni:
 *  - std::hex  – system szesnastkowy
 *  - std::oct  – system ósemkowy
 *  - std::dec  – system dziesiętny
 *
 * Uwaga:
 * std::stringstream przechowuje stan i zawartość,
 * dlatego przed ponownym użyciem musi zostać wyczyszczony.
 */
int main()
{
    int value = 255;
    stringstream mystream;

    // Konwersja do systemu szesnastkowego
    mystream << hex << value;
    string hex_result_str = mystream.str();
    cout << value << " w systemie 16 jako string: " << hex_result_str << endl;

    // Wyczyść zawartość i stan strumienia przed kolejnym użyciem
    mystream.str("");
    mystream.clear();

    // Konwersja do systemu ósemkowego
    mystream << oct << value;
    string oct_result_str = mystream.str();
    cout << value << " w systemie 8 jako string: " << oct_result_str << endl;

    mystream.str("");
    mystream.clear();

    // Konwersja do systemu dziesiętnego
    mystream << dec << value;
    string dec_result_str = mystream.str();
    cout << value << " w systemie 10 jako string: " << dec_result_str << endl;

    return 0;
}
