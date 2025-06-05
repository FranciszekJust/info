#include <iostream>
using namespace std;

int main() {
    int liczba;
    char wybor;
    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        cout << "Wprowadziles liczbe: " << liczba << endl;

        cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
        cin >> wybor;

    } while (wybor == 't' || wybor == 'T'); 

    cout << "Zakonczono wprowadzanie liczb." << endl;

    return 0;
}