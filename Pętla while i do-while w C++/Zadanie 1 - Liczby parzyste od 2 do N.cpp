#include <iostream>
using namespace std;

int main() {
    int N;
 cout << "Podaj liczbe N: ";
    cin >> N;
 if (N >= 2) {
        int i = 2; 
while (i <= N) {
            cout << i << " ";
            i += 2; 
        }
        cout << endl;
    } else {
        cout << "Liczba N musi byc wieksza lub rowna 2." << endl;
    }

    return 0;
}