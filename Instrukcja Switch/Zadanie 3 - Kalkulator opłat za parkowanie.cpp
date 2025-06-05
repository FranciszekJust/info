#include <iostream>

int main() {
    int godziny;
    char pojazd;

    std::cout << "Podaj liczbe godzin parkowania";
    std::cin >> godziny;
    std::cout << "Podaj rodzaj pojazdu";
    std::cin >> pojazd;

    int oplata = 0;

    switch (pojazd) {
        case 'S':
            oplata = godziny * 5;
            std::cout << "Oplata za parkowanie" << oplata << " zl" << std::endl;
            break;
        case 'M':
            oplata = godziny * 3;
            std::cout << "Oplata za parkowanie" << oplata << " zl" << std::endl;
            break;
        case 'A':
            oplata = godziny * 10;
            std::cout << "Oplata za parkowanie" << oplata << " zl" << std::endl;
            break;
        default:
            std::cout << "Blad Niewlasciwy typ pojazdu" << std::endl;
    }

    return 0;
}