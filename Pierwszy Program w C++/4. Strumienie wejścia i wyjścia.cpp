#include <iostream>
#include <string>

int main() {
    std::string imie;
    int wiek;

    std::cout << "Podaj swoje imię: ";
    std::cin >> imie;
    std::cout << "Podaj swój wiek: ";
    std::cin >> wiek;

    std::cout << "Witaj, " << imie << "! Masz " << wiek << " lat." << std::endl;

    return 0;
}