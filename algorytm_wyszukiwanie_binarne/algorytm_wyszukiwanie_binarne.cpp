#include <iostream>



using namespace std;

int szukaj(int szukana, int lista[15]) {
    int l, p, sr;
    bool found = false;
    l = 0;
    p = 15;
    sr = (l + p) / 2;
    while (l <= p)
    {
        if (lista[sr] == szukana) {
            cout << "Liczba " << szukana << " znajduje sie w komorce o indeksie " << sr << ".\n";
            found = true;
        }
        if (lista[sr] > szukana) {
            p = sr - 1;
        } else {
            l = sr + 1;
        }
        sr = (l + p) / 2;
    }
    if (found == false) {
        cout << "Liczba " << szukana << " nie znajduje sie w zadnym indeksie.";
    }
    return 0;
}

int main()
{
    int licz;
    int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    cout << "   [ Wyszukiwanie naturalne ]\n/Bartlomiej Pawlus, Zofia Grabczewska/\n\n\n";
    cout << "Podaj liczbe, ktora chcesz znalezc! \n";
    cin >> licz;
    szukaj(licz, tab);
}

