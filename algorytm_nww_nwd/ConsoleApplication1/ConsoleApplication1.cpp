#include <iostream>
#include <stdlib.h>

using namespace std;

int la;
int lb;
int lc;

string title = "88b 88 Yb        dP Yb        dP     88     88b 88 Yb        dP 8888b.\n88Yb88  Yb  db  dP   Yb  db  dP      88     88Yb88  Yb  db  dP   8I  Yb\n88 Y88   YbdPYbdP     YbdPYbdP       88     88 Y88   YbdPYbdP    8I  dY\n88  Y8    YP  YP       YP  YP        88     88  Y8    YP  YP    8888Y \n\n";

int nwd(int a, int b) {
		while (a != b) {
				if (a < b == true)
				{
						b = b - a;
				}
				else {
						a = a - b;
				}
		}
		lc = a;
		return 0;
}

int nww(int a, int b) {
		int iloczyn;
		int nww;
		iloczyn = a * b;
		nwd(a, b);
		nww = iloczyn / a;
		lc = nww;
		return 0;
}

int main() {
		int koniec = 1;
		int opti;
		do {
				cout << title << " Zosia Grabczewska i Bartek Pawlus \n" << "*-.-*-.*-.-*-.*-.-*-.*-.-*-.*-.-*-." << "\n\n" << "Co chcesz obliczyc? \n" << "> (1) NWD \n" << "> (2) NWW \n";
				cin >> opti;
				switch (opti) {
				default:
						system("CLS");
						cout << "[!] Niepoprawna opcja. Sprobuj jeszcze raz. \n\n";
						break;
				case 1:
						system("CLS");
						cout << "[Kalkulator NWD] \n\n[1] Wprowadz pierwsza liczbe:";
						cin >> la;
						cout << "[2] Wprowadz druga liczbe:";
						cin >> lb;
						nwd(la, lb);
						cout << "NWD(" << la << ", " << lb << ") wynosi: " << lc;
						koniec = 0;
						break;
				case 2:
						system("CLS");
						cout << "[Kalkulator NWW] \n\n[1] Wprowadz pierwsza liczbe:";
						cin >> la;
						cout << "[2] Wprowadz druga liczbe:";
						cin >> lb;
						nww(la, lb);
						cout << "NWW(" << la << ", " << lb << ") wynosi: " << lc;
						koniec = 0;
						break;

				}
		} while(koniec > 0);
		return 0;
}
