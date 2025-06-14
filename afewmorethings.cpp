#include <iostream>

namespace first{
    int x = 1;
}

int main() {
    int x = 4;

    // try not to use
    // using std::cout;

    std::cout << first::x + x << "\n";

    // const
    const double PI = 3.14159;

    std::cout << PI << ", this is pi, a constant.";

    return 0;
}