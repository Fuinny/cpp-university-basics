#include <cmath>
#include <iomanip>
#include <iostream>

// e^x - 3x
double function_1(double x) {
    return std::exp(x) - 3 * x;
}

// cos(x) - x
double function_2(double x) {
    return std::cos(x) - x;
}

// -2x + 0.25 + sin(x)
double function_3(double x) {
    return -2 * x + 0.25 + std::sin(x);
}

// log10(x) + x^3
double function_4(double x) {
    return std::log10(x) + std::pow(x, 3);
}

double bisection_method(double a, double b, double epsilon, double (*func)(double)) {
    if (func(a) * func(b) >= 0) {
        return NAN;
    }

    double c = 0.0;

    while (b - a >= epsilon) {
        c = (a + b) / 2;

        if (func(c) == 0) {
            break;
        } else if (func(a) * func(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    return c;
}

int main() {
    int choice = 0;
    double (*selected_function)(double);
    double a = 0.0, b = 0.0, epsilon = 1e-6;

    std::cout << "Select function:\n";
    std::cout << "1. f(x) = e^x - 3x\n";
    std::cout << "2. f(x) = cos(x) - x\n";
    std::cout << "3. f(x) = -2x + 0.25 + sin(x)\n";
    std::cout << "4. f(x) = log10(x) + x^3\n";
    std::cout << "Enter your choice (1-4): ";

    std::cin >> choice;

    switch (choice) {
    case 1:
        selected_function = function_1;
        break;
    case 2:
        selected_function = function_2;
        break;
    case 3:
        selected_function = function_3;
        break;
    case 4:
        selected_function = function_4;
        break;
    default:
        std::cout << "No such function!\n";
        return 1;
    }

    std::cout << "Enter a and b values: ";
    std::cin >> a >> b;

    double root = bisection_method(a, b, epsilon, selected_function);

    if (!std::isnan(root)) {
        std::cout << "The root of the function is: " << std::setprecision(6) << std::fixed << root << '\n';
    } else {
        std::cout << "No solutions!\n";
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}
