#include <cmath>
#include <iostream>

int main() {
    const double G = 6.673;

    double m1 = 0.0, m2 = 0.0, R = 0.0;

    std::cout << "Enter m1, m2 and R: ";
    std::cin >> m1 >> m2 >> R;

    std::cout << "F = " << G * std::pow(10, -8) * m1 * m2 / std::pow(R, 2) << '\n';

    return 0;
}
