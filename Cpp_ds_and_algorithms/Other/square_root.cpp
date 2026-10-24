#include <iostream>
#include <cmath>

using namespace std;

double pierwiastek(double szukana, double dokladnosc){
    
    if (szukana < 0) {
        return -1;
    }
    if (dokladnosc <= 0){
        return -1;
    }

    if (szukana==0){
        return 0;
    }

    double b = szukana;
    double a = 1;

    while(fabs(a-b)>=dokladnosc){
        a = (a+b)/2;
        b = szukana/a;
    }

    return (a+b)/2;
}

int main(){
    double dokladnosc = 0.000001;
    double pierwiastekLiczby = 3;

    cout << "Pierwiastek liczby " 
        << pierwiastekLiczby << " to: "
        << pierwiastek(pierwiastekLiczby, dokladnosc);

    return 0;
}
