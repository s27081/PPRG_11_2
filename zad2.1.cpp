#include <iostream>

using namespace std;

int main()
{
    int x;
    int wynik = 0;
    int wynikSzeregu = 0;

    cout << "Podaj liczbe: ";
    cin >> x;

    for (int i = 1; i <= x; i++) {
       
        wynik += i;

        cout << wynik << endl;
        
        wynikSzeregu += wynik;
    }
    cout << wynikSzeregu;

}
