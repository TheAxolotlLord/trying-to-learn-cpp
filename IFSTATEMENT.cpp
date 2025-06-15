#include <iostream>
#include <cmath>

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 13){
        std::cout << "Welcome to the web!";
    } else if(age <= 0){
        std::cout << "Uh, what?";
    } else{
        std::cout << "Sorry, but you have to wait " << 13 - age << " years to go onto this site.";
    }

    // switches are the best

    switch(age){
        case 13:
            std::cout << "You barely made it!";
            break;
        case 12:
            std::cout << "Tough Luck!";
            break;
        default:
            std::cout << "";
            break;
    }

    return 0;
}