#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "Podaj wartosc a: ";
    cin >> a;

    cout << "Podaj wartosc b: ";
    cin >> b;

    cout << "Wiersz o dlugosci a:" << endl;

    for (int x = 0; x < a; x++) {
        cout << "*";
    }
    cout << endl;


    cout << "Wiersz o dlugosci b:" << endl;
    for (int y = 0; y < b; y++) {
        cout << "*" << endl;
    }
    cout << endl;

    cout << "Prostokat z gwiazdek o wymiarach a na b:" << endl;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << "*";

        }
        cout << endl;
    }

    cout << "Obwod prostokata:" << endl;
     for (int v = 0; v < b; v++) {
        for (int z = 0; z < a; z++) {
            if (v == 0 || v == b - 1) {
                cout << "*";
            }else {
                cout << "*";
                for (int w = 0; w < a-2; w++) {
                    cout << " ";
                }
                cout << "*";
                break;

            }
        }
        cout << endl;
    }

     int counter = 0;

     cout << "Trojkat prostokatny z katem prostym w lewym dolnym rogu:" << endl;
     for (int m = 0; m <= a; m++) {
         for (int n = 0; n < counter; n++) {
             cout << "*";
         }
         counter++;
         cout << endl;
     }

     counter = a;
     int backupA = a;
     cout << "Trojkat prostokatny z katem prostym w prawym gornym rogu:" << endl;
     for (int m = 0; m <= a; m++) {
         backupA = a;
         for (int n = 0; n < counter; n++) {
             while (counter < backupA) {
                 cout << " ";
                 backupA--;
             }
             cout << "*";
         }
         counter--;
         cout << endl;
     }
}
