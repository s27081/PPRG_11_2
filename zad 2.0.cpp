#include <iostream>

using namespace std;

int main()
{
    int kawalkiPizzy = 13;
    int liczbaGosci = 5;

    if (kawalkiPizzy % liczbaGosci == 0) {
        cout << "Na kazdego uczestnika przypadaja " << kawalkiPizzy / liczbaGosci << " kawalki pizzy";
    }
    else {
        int reszta = kawalkiPizzy % liczbaGosci;

        cout << "Na kazdego uczestnika przypadaja " << (kawalkiPizzy - reszta) / liczbaGosci << " kawalki pizzy" << endl;
        cout << "Natomiast gospodarz otrzyma " << reszta;
    }
}
