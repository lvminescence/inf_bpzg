#include <iostream>
#include <stdlib.h>
using namespace std;
int counts;
string title = "  +----------------\n   Ciag Fibonacciego \n    Ciag Fibonacciego \n     Ciag Fibonacciego \n      Ciag Fibonacciego\n     ------------------+ \n\n X==\n [Zosia Grabczewska, Bartek Pawlus] \n                                ==X";

int fibonacci(int n) {
    long long f0 = 0;
    long long f1 = 1;
    long long f;
    for (int i = 0; i < n; i++)
    {
        if (i > 1) {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        else {
            f = i;
        }
        cout << f << endl;
    }
    return 0;
}
int main()
{
    cout << title << "\n\n\n[Ile chcesz podac liczb z ciagu Fibonacciego?]:  ";
    cin >> counts;
    system("CLS");
    cout << title << "\n\n\n[" << counts << " liczb ciagu Fibonacciego]: \n";
    fibonacci(counts);
}

