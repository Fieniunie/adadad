#include <iostream>
using  namespace std;

int main() {

	int s;
	int tablica[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	int l = 0;
	int p = 14;
	int sr = (l + p) / 2;

	cout << "jakiej liczby szukasz? ";
	cin >> s;

	cout << "liczba, ktorej szukasz: " << s << endl;

	while (l <= p) {
		if (tablica[sr] == s){
		    cout << "Liczba " << s << " jest w zbiorze na pozycji: " << sr;
			return sr;
		}
		else if (tablica[sr] > s)
			p = sr - 1;
		else
			l = sr + 1;
		sr = (l + p) / 2;
	}
	
	return -1;

}
