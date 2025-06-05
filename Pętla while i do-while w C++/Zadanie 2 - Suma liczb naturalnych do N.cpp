#include <iostream>
using namespace std;

int main() {
    int N;
    int suma = 0;
    cout << "Podaj liczbe N: ";
    cin >> N;
    if (N > 0) {
        int i = 1; 
        while (i <= N) {
            suma += i; 
            i++; 
        }
        cout << "Suma liczb naturalnych od 1 do " << N << " wynosi: " << suma << endl;
    } else {
        cout << "Liczba N musi byc liczba dodatnia." << endl;
    }

    return 0;
}