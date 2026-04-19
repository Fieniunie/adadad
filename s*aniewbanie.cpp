#include <iostream>
using  namespace std;


void merge(int* tab, int l, int m, int r) {
    int lsize = m - l + 1;
    int rsize = r - m;

    int* tabl = new int[lsize];
    int* tabr = new int[rsize];

    for (int x = 0; x < lsize; x++) {
        tabl[x] = tab[l + x];
    }
    for (int y = 0; y < rsize; y++) {
        tabr[y] = tab[m + 1 + y];
    }

    int indexl = 0;
    int indexr = 0;
    int currIndex = l;

    while (indexl < lsize && indexr < rsize) {
        if (tabl[indexl] <= tabr[indexr]) {
            tab[currIndex] = tabl[indexl++];
        } else {
            tab[currIndex] = tabr[indexr++];
        }
        currIndex++;
    }

    while (indexl < lsize) tab[currIndex++] = tabl[indexl++];
    while (indexr < rsize) tab[currIndex++] = tabr[indexr++];

    delete[] tabl;
    delete[] tabr;
}

void mergesort(int* tab, int l, int r) {
    if (l < r) {
        int m= l + (r - l) / 2;
        mergesort(tab, l, m);
        mergesort(tab, m + 1, r);
        merge(tab, l, m, r);
    }
}

int main() {

    int p;
    cout << "podaj ilosc elementow: ";
    cin >> p;

    int* tab = new int[p];

    for (int o = 0; o < p; o++) {
        cout << "podaj element " << o + 1 << ": ";
        cin >> tab[o];
    }

    mergesort(tab, 0, p - 1);

    cout << "posortowana tablica: ";
    for (int i = 0; i < p; i++) {
        cout << tab[i] << " ";
    }
    
}
