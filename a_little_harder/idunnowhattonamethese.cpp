#include <iostream>
#include <cmath>

int main() {

    // ternary operator

    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    number % 2 == 0 ? std::cout << "Your number is even!" : std::cout << "Your number is odd!";

    std::cout << "\n";

    number <= 0 || number >= 100 ? std::cout << "Your number is not in a range from 1 to 100!" : std::cout << "Your number is in a range from 1 to 100!";

    return 0;
}
