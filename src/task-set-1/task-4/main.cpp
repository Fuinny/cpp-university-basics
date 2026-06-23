#include <cmath>
#include <iostream>

int main() {
    double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;

    std::cout << "Enter x1, y1, x2, y2: ";
    std::cin >> x1 >> y1 >> x2 >> y2;

    std::cout << "\nDistance: " << std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2)) << '\n';

    return 0;
}
