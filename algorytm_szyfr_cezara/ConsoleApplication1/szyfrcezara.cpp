#include <iostream>
#include <cstring>
using namespace std;
char tablica[2000];

int cezar(int klucz, char tab[2000]) {
	int dl;
	dl = sizeof(tab);
	bool conti = true;
	if (not (klucz >= -26 && klucz <= 26))
	{
		conti = false;
	}
	if (klucz >= 0)
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz <= 'z') {
				tab = tab + klucz;
			}
			else {
				tab = tab + klucz - 26;
			}
		}
	}
	else {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz <= 'a') {
				tab = tab + klucz;
			}
			else {
				tab = tab + klucz + 26;
			}
		}
	}
	cout << tab[0];
	return 0;
}

int main() {
	int a;
	cin >> tablica;
	cout << "placeholder";
	cin >> a;
	cezar(a, tablica);
}

