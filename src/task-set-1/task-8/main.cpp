#include <cmath>
#include <numbers>
#include <iostream>

int main() {
    std::cout << "e to the power of pi is equal to: " << std::pow(std::numbers::e, std::numbers::pi) << '\n';
    std::cout << "pi to the power of e is equal to: " << std::pow(std::numbers::pi, std::numbers::e) << '\n';

    return 0;
}
