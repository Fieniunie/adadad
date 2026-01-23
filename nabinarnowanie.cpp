#include <iostream>
using namespace std;

void binfunction(int l){
    int tablica[15];
    int i=0;
    while(l!=0){
        tablica[i++];
        tablica[i]=l%2;
        l=l/2;
    }
    for(int j=i; j>0; j--){
        cout << tablica[j];
    }
}

int main(){
    int x;
    cout << "podaj liczbe: ";
    cin >> x;
    binfunction(x);
}
