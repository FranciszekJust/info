#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int wiersze, kolumny;
 
    cout << "Podaj liczbe wierszy: ";
    cin >> wiersze;
    cout << "Podaj liczbe kolumn: ";
    cin >> kolumny;
 
    vector<vector<int>> macierz(wiersze, vector<int>(kolumny));
 
    int liczba = 1;
 
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            macierz[i][j] = liczba;
            liczba += 2; 
        }
    }
 
    cout << "Zawartosc macierzy:" << endl;
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    }
 
    return 0;
}