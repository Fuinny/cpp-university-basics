#include <cmath>
#include <iostream>

int main() {
    double a = 0.0, b = 0.0, c = 0.0, d = 0.0;

    std::cout << "Enter the coefficients of the equation: ";
    std::cin >> a >> b >> c;

    if (a == 0) {
        std::cout << "Error! 'a' cannot be 0 in a quadratic equation!\n";
        return 1;
    }

    d = (b * b) - (4 * a * c);

    if (d < 0) {
        std::cout << "The equation has no real solutions.\n";
    } else if (d == 0) {
        std::cout << "x1 = x2 = " << -b / (2 * a) << '\n';
    } else {
        std::cout << "x1 = " << (-b - std::sqrt(d)) / (2 * a) << '\n';
        std::cout << "x2 = " << (-b + std::sqrt(d)) / (2 * a) << '\n';
    }

    return 0;
}
