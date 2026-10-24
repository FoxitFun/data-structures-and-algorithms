#include <iostream>

using namespace std;

int hornerRek(int wsp[],int st, int x)
{
	if(st==0)
		return wsp[0];
	
	return x*hornerRek(wsp,st-1,x)+wsp[st];
}

int hornerIter(int wsp[], int len, int x){
    int wynik = wsp[0];

    for (int i=1; i<len; i++){
        wynik = (wynik * x) + wsp[i];
    }

    return wynik;
}

int main(){
    int wsp[] = {3, 3, -2, 11};
    int len = sizeof(wsp)/sizeof(wsp[0]);
    int st = len-1;
    int x = 2;
    
    cout << "W(x) = " << wsp[0] << "x^" << st;
    for (int i=1; i<len; i++){
        if (wsp[i] >= 0){
            cout << " + "<< wsp[i] << "x^" << st-i;
        }
        else{
            cout << " "<< wsp[i] << "x^" << st-i;
        }
    }
    
    cout << endl;
    cout << "Dla x = " << x << endl;
    cout << "Wynik iteracyjny: " << hornerIter(wsp, len, 2) << endl;
    cout << "Wynik rekurencyjny: " << hornerRek(wsp, st, 2) << endl;
    return 0;
}