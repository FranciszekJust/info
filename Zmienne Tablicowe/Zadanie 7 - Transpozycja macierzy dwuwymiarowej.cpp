#include <iostream>
using namespace std;

int main() {
    int tablica[2][3];
    int transponowana[3][2];
    
    cout << "Podaj 6 liczb calkowitych do macierzy 2x3:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Podaj liczbe dla wiersza " << i+1 << ", kolumny " << j+1 << ": ";
            cin >> tablica[i][j];
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transponowana[j][i] = tablica[i][j];
        }
    }
    
    cout << "Transponowana macierz:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << transponowana[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
