#include <iostream>

using namespace std;
int n;

int liczbypierwsze(int a) {
	cout << "Liczby pierwsze w tym zakresie to: \n";
	int lp = 0;
	int p = 2;
	while (lp < a)
	{
		for (int d = 2; d < p - 1; d++)
		{
			if (p % d == 0)
			{
				p = p + 1;
			}
		}
		cout << p << endl;
		lp = lp + 1;
		p = p + 1;
	} return 0;
}

int main() {
	cout << "Podaj ilosc liczb pierwszych ktore chcesz wymienic: \n";
	cin >> n;
	liczbypierwsze(n);
} 