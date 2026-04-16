#include <iostream>
#include <algorithm>

using namespace std;

void printVector(vector<int> &numbers)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << ", ";
    }

    cout << endl;
}

vector<int> LongestIncreasingSequence( vector<int>& dane )
{
    int ilosc = dane.size();
    vector<int> L(ilosc,1);
    vector<int> Ref(ilosc,-1);

    int maxCount=0, currentMaxIndex = -1;

    for ( int i = 0; i < ilosc; ++i )
    {
        for ( int j = 0; j < i; ++j )
        {
            if ( dane[i] <= dane[j] ) continue;
            if ( L[j]+1 > L[i] )
            {
                L[i] = L[j]+1;
                Ref[i] = j;
            }
        }
        if ( L[i] > maxCount ) {
            maxCount = L[i];
            currentMaxIndex = i;
        }
        cout << "i = " << i << endl;
        cout << "L[i]: " << L[i] << "\t\tRef[i]: " << Ref[i] << endl;
        cout << "maxCount: " << maxCount << "\tcurrMaxIndex: " << currentMaxIndex << endl;

    }

    vector<int> vec;
    while (currentMaxIndex != -1) {
        vec.push_back(dane[currentMaxIndex]);
        currentMaxIndex = Ref[currentMaxIndex];
    }
    reverse(vec.begin(),vec.end());

    return vec;
}

int main()
{
    vector<int> arr = {23, 56, 4, 22, 3334, 78, 12, 356, 34, 5555};
    cout << endl << endl;
    vector<int> lis_arr = LongestIncreasingSequence(arr);
    
    cout << "\n";
    printVector(lis_arr);
}