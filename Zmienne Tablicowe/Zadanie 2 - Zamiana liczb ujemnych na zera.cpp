#include <iostream>
using namespace std;

int main() {
    int tablica[5];
    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe nr " << i+1 << ": ";
        cin >> tablica[i];
    }
    for (int i = 0; i < 5; i++) {
        if (tablica[i] < 0) {
            tablica[i] = 0;
        }
    }
    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < 5; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
    
    return 0;
}
