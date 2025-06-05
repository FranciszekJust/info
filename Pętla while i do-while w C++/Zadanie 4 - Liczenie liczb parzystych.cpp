#include <iostream>
using namespace std;

int main() {
    int N;
    int licznikParzystych = 0;
    int i = 1;
    cout << "Podaj liczbe N: ";
    cin >> N;
    if (N > 0) {
        do {
            if (i % 2 == 0) { 
                licznikParzystych++; 
            }
            i++; 
        } while (i <= N);

        cout << "Liczba liczb parzystych w zakresie od 1 do " << N << " wynosi: " << licznikParzystych << endl;
    } else {
        cout << "Liczba N musi byc liczba dodatnia." << endl;
    }

    return 0;
}