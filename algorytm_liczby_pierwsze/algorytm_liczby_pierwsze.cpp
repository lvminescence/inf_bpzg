#include <iostream>
#include <stdlib.h>
using namespace std;
int n;
int oe = 1;
string title = "+-+ +-+ +-+ +-+ +-+ +-+  +-+ +-+ +-+ +-+ +-+ +-+ +-+ +-+\n|L| |I| |C| |Z| |B| |Y|  |P| |I| |E| |R| |W| |S| |Z| |E|\n+-+ +-+ +-+ +-+ +-+ +-+  +-+ +-+ +-+ +-+ +-+ +-+ +-+ +-+\n\n   - Zosia Grabczewska - Bartek Pawlus - \n\n";
int liczbypierwsze(int a) {
	cout << "Liczby pierwsze w tym zakresie to: \n";
	int lp = 0;
	int p = 2;
	bool opt = true;
	while (lp < a)
	{
		for (int d = 2; d < p - 1; d++)
		{
			if (p % d == 0)
			{
				opt = true;
			}
		}
		if (opt == false)
		{
			cout << p << endl;
			lp = lp + 1;
		}
		p = p + 1;
		opt = false;
	} return 0;
}

int main() {
	do
	{
		cout << title << endl;
		cout << "Podaj ilosc liczb pierwszych ktore chcesz wymienic: \n";
		cin >> n;
		if (n <= 0)
		{
			system("CLS");
			cout << "Ilosc liczb pierwszych nie moze byc mniejsza niz zero! \n\n";
		}
		else {
			liczbypierwsze(n);
			oe = 0;
		}
		
	} while (oe > 0);
} 