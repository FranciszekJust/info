#include <iostream>
#include <iomanip>
int main() {
    double waga, wzrost;

    std::cout << "Podaj wage w kg: ";
    std::cin >> waga;
    std::cout << "Podaj wzrost w metrach: ";
    std::cin >> wzrost;

    double bmi = waga / (wzrost * wzrost);

    std::cout << "Twoje BMI wynosi: " << std::fixed << std::setprecision(4) << bmi << std::endl;

    if (bmi < 18.5) {
        std::cout << "Twoj stan wagowy: Niedowaga" << std::endl;
    } else if (bmi < 25) {
        std::cout << "Twoj stan wagowy: W normie" << std::endl;
    } else if (bmi < 30) {
        std::cout << "Twoj stan wagowy: Nadwaga" << std::endl;
    } else {
        std::cout << "Twoj stan wagowy: Otylosc" << std::endl;
    }

    return 0;
}