#include <iostream>

int main() {
    double temperaturaC;
    char jednostka;

    std::cout << "Podaj temperature ";
    std::cin >> temperaturaC;
    std::cout << "Wybierz jednostke docelowa ";
    std::cin >> jednostka;

    switch (jednostka) {
        case 'K':
            std::cout << "Temperatura w stopniach Kelvina: " << temperaturaC + 273.15 << std::endl;
            break;
        case 'F':
            std::cout << "Temperatura w stopniach Fahrenheita: " << (temperaturaC * 9/5) + 32 << std::endl;
            break;
        default:
            std::cout << "Blad: Niewlasciwa jednostka" << std::endl;
    }

    return 0;
}