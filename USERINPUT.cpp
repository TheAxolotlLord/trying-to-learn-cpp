#include <iostream>

int main() {
    int days = 1;

    std::cout << days << '\n';

    days++;

    std::cout << days << '\n';

    days += (int) 1.5;
  
    std::cout << days << '\n';

    std::string name;

    std::cout << "What's ya full name?\n";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Why, hello there " << name << "!\n";

    return 0;
}