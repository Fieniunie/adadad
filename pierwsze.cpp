#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int d;
    int n;
    cout << "podaj liczbę: ";
    cin >> n;
    
    if(n<2){
        cout << n << " nie jest liczbą pierwszą";
        return n;
    };
    
    for(d=2; d<=sqrt(n); d++){
        if(n%d==0){
            cout << n << " nie jest liczbą pierwszą";
            return n;
        };
    };
    cout << n << " jest liczbą pierwszą";
}
