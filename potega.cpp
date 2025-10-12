#include <iostream>
using namespace std;

int main() {
    int wynik = 1;
    int a;
    int n;
    int x;
    int y;
    cout << "podaj baze: ";
    cin >> a;
    cout << "podaj wykladnik: ";
    cin >> n;
    x=a;
    y=n;
    while(n>0){
        if(n%2==1){
            wynik=wynik*a;
        }
        a=a*a;
        n=n/2;
    }
    cout << x << "^" << y << " = " << wynik;
    
}
