#include <cmath>
#include <iostream>

int main() {
    int a = 0;

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << a << '\n';
    std::cout << std::pow(a, 3) << " " << std::pow(a, 6) << '\n';
    std::cout << std::pow(a, 6) << " " << std::pow(a, 3) << " " << a << '\n';

    return 0;
}
