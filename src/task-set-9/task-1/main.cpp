#include <cmath>
#include <iomanip>
#include <iostream>

double function(double x) {
    return std::exp(x) - 3 * x;
}

double bisection_method(double a, double b, double epsilon) {
    if (function(a) * function(b) >= 0) {
        return NAN;
    }

    double c = 0.0;

    while (b - a >= epsilon) {
        c = (a + b) / 2;

        if (function(c) == 0) {
            break;
        } else if (function(a) * function(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    return c;
}

int main() {
    double a = 0.0, b = 0.0;
    double epsilon = 1e-6;

    std::cout << "Enter a and b values: ";
    std::cin >> a >> b;

    double root = bisection_method(a, b, epsilon);

    if (!std::isnan(root)) {
        std::cout << "The root of the function is: " << std::setprecision(6) << std::fixed << root << '\n';
    } else {
        std::cout << "No solutions!\n";
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}
