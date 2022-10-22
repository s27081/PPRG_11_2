#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "Podaj wartosc a: ";
    cin >> a;

    cout << "Podaj wartosc b: ";
    cin >> b;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << "*";

     }
        cout << endl;
   }
    cout << "Obwod kwadratu: " << 2 * a + 2 * b << endl;
}
