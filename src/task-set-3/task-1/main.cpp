#include <iostream>

int main() {
    double a = 0.0, b = 0.0, c = 0.0;

    std::cout << "Enter the lengths of the segments: ";
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "It is possible to form a triangle\n";
    } else {
        std::cout << "It is not possible to form a triangle\n";
    }

    return 0;
}
