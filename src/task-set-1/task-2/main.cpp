#include <iostream>

int main() {
    const double factorial_of_two = 2;
    const double factorial_of_three = 6;
    const double factorial_of_four = 24;

    double x = 0.0;

    std::cout << "Enter x value: ";
    std::cin >> x;

    std::cout << "y = " << 1 + x + (x * x / factorial_of_two) + (x * x * x / factorial_of_three) + (x * x * x * x / factorial_of_four) << '\n';

    return 0;
}
