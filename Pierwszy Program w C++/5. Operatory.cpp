#include <iostream>

int main() {
    int a, b;

    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> a;
    std::cout << "Podaj drugą liczbę: ";
    std::cin >> b;

    std::cout << "Suma: " << a + b << std::endl;
    std::cout << "Różnica: " << a - b << std::endl;
    std::cout << "Iloczyn: " << a * b << std::endl;
    std::cout << "Iloraz: " << a / b << std::endl;
    std::cout << "Reszta z dzielenia: " << a % b << std::endl;

    return 0;
}