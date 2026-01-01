#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Implementacja algorytmu sita Eratostenesa.
 * 
 * Funkcja sito() mutuje wartosci wektora, tak że liczby złożone oznaczone są jako true,
 * a liczby pierwsze pozostają jako false.
 * 
 * @param wektor - wektor z zakresem od 0 do N wypełniony flagą false.
 *      N to zakres działania sita.
 */
void sito(vector <bool> &wektor){
    for (int i=2; i*i<=wektor.size(); i++){
        if(!wektor[i]){
            for (int j = i*i; j<=wektor.size(); j+=i){
                wektor[j] = true;
            }
        }
    }
}

int main(){
    int n;

    cout << "\n\rPodaj zakres górny przedziału: ";
    cin >> n;

    vector <bool> wektor(n+1, false);
    sito(wektor);

    // wydrukuj tylko liczby pierwsze:
    for(int i=2; i<=n; i++){
        if(!wektor[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}
