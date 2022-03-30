#include <iostream>
using namespace std;
int klucz;
char tab[1000] = { 'a', 'b', 'c' };

int cezar(int klucza, char tab[1000]) {
	int dl;
	bool conti = true;
	dl = strlen(tab[0]);
	if (!(klucza >= -26 and klucza <= 26))
	{
		conti = false;
	}
	if (conti = true)
	{
		if (klucz >= 0)
		{
			for (int i = 0; i < dl; i++)
			{
				if (tab + klucz <= i)
				{
					tab = tab + klucz;
				}
				else {
					tab = tab + klucz - 26;
				}
			}
		}
		else {
			for (int i = 0; i < dl; i++)
			{
				if (tab + klucz >= i)
				{
					tab += klucz;
				}
				else {
					tab = tab + klucz + 26;
				}
			}

		}
	}
}