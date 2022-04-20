#include <iostream>


int licz;
using namespace std;

int szukaj(int szukana) {
    int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    int l, p, sr;
    l = 0;
    p = 15;
    sr = (l + p) / 2;
    while (l <= p)
    {
        if (tab[sr] = szukana) {
            cout << "Liczba " << szukana << " znajduje sie w komorce o indeksie " << sr << ".\n";
        }
        if (tab[sr] > szukana) {
            p = sr - 1;
        } else {
            l = sr + 1;
        }
        sr = (l + p) / 2;
    }
    return 0;
}

int main()
{
    cout << "Podaj liczbe, ktora chcesz znalezc";
    cin >> licz;
    szukaj(licz);
}

