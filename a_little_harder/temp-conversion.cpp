#include <iostream>
#include <cmath>

int main() {

    double temp;
    char unit;

    std::cout << "Select a unit, C or F, to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (temp * 1.8) + 32;
        std::cout << "The temperature is: " << temp << "F\n";
    } else if (unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) * 5/9;
        std::cout << "The temperature is: " << temp << "C\n";
    } else {
        std::cout << "Please only enter either C or F.\n";
    }

    return 0;
}