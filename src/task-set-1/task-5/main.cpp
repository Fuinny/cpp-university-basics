#include <cmath>
#include <numbers>
#include <iomanip>
#include <iostream>

int main() {
    double degrees = 0.0;

    std::cout << "Enter degrees: ";
    std::cin >> degrees;

    std::cout << "sin (" << degrees << ") is equal to " << std::fixed << std::setprecision(2) << std::sin(degrees * std::numbers::pi / 180) << '\n';

    return 0;
}
