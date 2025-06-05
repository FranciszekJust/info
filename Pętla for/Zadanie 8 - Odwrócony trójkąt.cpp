#include <iostream>
using namespace std;

int main() {
    int szerokosc, wysokosc;

    cout << "Podaj szerokosc: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    if (szerokosc < 1 || wysokosc < 1 || szerokosc % 2 == 0) {
        cout << "Szerokosc i wysokosc musza byc liczba nieparzysta i wieksza od 0." << endl;
        return 1;
    }
    for (int i = 0; i < wysokosc; i++) {
        int margin = i; 
        for (int j = 0; j < margin; j++) {
            cout << " ";
        }
        for (int j = margin; j < szerokosc - margin; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}