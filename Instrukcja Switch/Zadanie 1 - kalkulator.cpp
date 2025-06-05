#include <iostream>

int main() {
    int liczba1, liczba2;
    char dzialanie;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> liczba1;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> liczba2;
    std::cout << "Podaj znak dzialania (+, -, *, /): ";
    std::cin >> dzialanie;

    switch (dzialanie) {
        case '+':
            std::cout << "Wynik: " << liczba1 + liczba2 << std::endl;
            break;
        case '-':
            std::cout << "Wynik: " << liczba1 - liczba2 << std::endl;
            break;
        case '*':
            std::cout << "Wynik: " << liczba1 * liczba2 << std::endl;
            break;
        case '/':
            if (liczba2 != 0) {
                std::cout << "Wynik: " << liczba1 / liczba2 << std::endl;
            } else {
                std::cout << "Blad: Nie mozna dzielic przez 0!" << std::endl;
            }
            break;
        default:
            std::cout << "Blad: Nieznany znak dzialania!" << std::endl;
    }

    return 0;
}
