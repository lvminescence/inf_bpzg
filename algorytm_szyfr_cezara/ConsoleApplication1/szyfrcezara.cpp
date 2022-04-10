#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
string title = "  #####   \n #     # ###### #   # ###### #####      ####  ###### ######   ##   #####    ##\n #           #   # #  #      #    #    #    # #          #   #  #  #    #  #  #\n  #####     #     #   #####  #    #    #      #####     #   #    # #    # #    #\n       #   #      #   #      #####     #      #        #    ###### #####  ######\n #     #  #       #   #      #   #     #    # #       #     #    # #   #  #    #\n  #####  ######   #   #      #    #     ####  ###### ###### ###    #   #  #    # \n\n[Zosia Grabczewska, Bartlomiej Pawlus]\n\n";

int cezar(int klucz, char tab[2000]) {
	int dl;
	dl = strlen(tab);
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
				tab[i] = tab[i] + klucz;
			}
			else {
				tab[i] = tab[i] + klucz - 26;
			}
		}
	}
	else {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz >= 'a') {
				tab[i] = tab[i] + klucz;
			}
			else {
				tab[i] = tab[i] + klucz + 26;

			}
		}
	}
	for (int i = 0; i <= dl; i++) {
		cout << tab[i];
	}
	return 0;
}

int main() {
	char tablica[2000];
	int a;
	cout << title;
	cout << "[Podaj ciag, ktory chcesz zaszyfrowac. Nie moze on zawierac zadnych spacji.] \n";
	cin >> tablica;
	cout << "[Podaj klucz. Musi byc w przedziale <-26; 26>.] \n";
	cin >> a;
	system("CLS");
	cout << title;
	cout << "[Uzyty klucz: " << a << "] \n";
	cout << "[Wyraz przed zaszyfrowaniem to: ";
	for (int i = 0; i <= strlen(tablica); i++) {
		cout << tablica[i];
	}
	cout << "]\n[Wyraz po zaszyfrowaniu to: ";
	cezar(a, tablica);
	cout << "]\n\n\n";
}
