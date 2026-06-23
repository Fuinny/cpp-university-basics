#include <cmath>
#include <limits>
#include <iostream>

double power(int n, int p) {
    if (p < 0) return 1 / power(n, std::abs(p));
    if (p > 0) return n * power(n, p - 1);

    return 1;
}

int main() {
    int n = 0, p = 0;

    std::cout << "Enter a number and the power to raise it to: ";
    while (!(std::cin >> n >> p) || std::cin.peek() != '\n' || n == 0) {
        if (n == 0) {
            std::cout << "Error! Number cannot be equal to 0!\n";
            std::cout << "Please enter valid values: ";
        } else {
            std::cout << "Error! Please enter valid values: ";
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << n << " in the power of " << p << " is equal to " << power(n, p) << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
