#include <iostream>
using namespace std;

int main(){
    
    int k=2;
    int n;
    cout << "podaj liczbę: ";
    cin >> n;
    
    while(n>1){
        while(n%k==0){
            cout << k << ' ';
            n=n/k;
        }
        k++;
    }
    return 0;
}
