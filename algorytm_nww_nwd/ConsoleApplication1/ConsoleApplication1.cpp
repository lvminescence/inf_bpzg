#include <iostream>

using namespace std;

int la;
int lb;

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
	cout << a;
	return 0;
} 

int nww(int a, int b) {
	int iloczyn;
	int nww;
	iloczyn = a * b;
	while (a != b) {
		if (a < b == true)
		{
			b = b - a;
		}
		else {
			a = a - b;
		}
		nww = iloczyn / a;
		cout << nww;
		return 0;
	}
}
int main() {
	cin >> la;
	cout << endl;
	cin >> lb;
	cout << endl;
	nww(la, lb);
	return 0;
}