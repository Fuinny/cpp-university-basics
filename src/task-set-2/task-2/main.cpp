#include <cmath>
#include <iostream>

int main() {
    double x = 0.0, y = 0.0;

    std::cout << "Enter x and y coordinates: ";
    std::cin >> x >> y;

    if (std::abs(x) > 1 || std::abs(y) > 1) {
        std::cout << "The point is outside the shaded area\n";
    } else {
        std::cout << "The point is inside the shaded area\n";
    }

    return 0;
}
