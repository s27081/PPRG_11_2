#include <iostream>

using namespace std;

int main()
{
    int liczba;

    cout << "Podaj wartosc w zakresie 1-12: ";
    cin >> liczba;

    switch (liczba) {
    case 1:
        cout << "Styczen, 31 dni, pochmurno";
        break;
    case 2:
        cout << "Luty, 28 dni, pochmurno";
        break;
    case 3:
        cout << "Marzec, 31 dni, pochmurno";
        break;
    case 4:
        cout << "Kwiecien, 30 dni, slonecznie";
        break;
    case 5:
        cout << "Maj, 31 dni, slonecznie";
        break;
    case 6:
        cout << "Czerwiec, 30 dni, slonecznie";
        break;
    case 7:
        cout << "Lipiec, 31 dni, slonecznie";
        break;
    case 8:
        cout << "Sierpien, 31 dni, slonecznie";
        break;
    case 9:
        cout << "Wrzesien, 30 dni, slonecznie";
        break;
    case 10:
        cout << "Pazdziernik, 31 dni, pochmurno";
        break;
    case 11:
        cout << "Listopad, 30 dni, pochmurno";
        break;
    case 12:
        cout << "Grudzien, 31 dni, pochmurno";
        break;
    default:
        cout << "Liczba poza przedzialem";
    }
        
}