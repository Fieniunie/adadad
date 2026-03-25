N#include <iostream>
using namespace std;

int horner(int *wsp, int x, int y){
	if(x==0){
		return wsp[0];
	}
	return y*horner(wsp, x-1, y)+wsp[x];
}


int main(){
	int x;
	int y;
	cout << "podaj stopien: ";
	cin >> x;
	int *wspol = new int[x+1];
	int i=0;
	while(i<=x){
		cout << "poadaj wpolczynnik: ";
		cin >> wspol[i];
		i++;
	}
	cout << "podaj argument: ";
	cin >> y;
	cout << "w( " << y << " ) = " << horner(wspol, x, y);
	delete[] wspol;
}
