#include <iostream>

using namespace std;

int main()
{
    int x;
    int wynik = 0;

    cout << "Podaj liczbe: ";
    cin >> x;

    for (int i = 0; i <= x; i++) {
       
        wynik = wynik + i;
        
    }
    cout << wynik;

}