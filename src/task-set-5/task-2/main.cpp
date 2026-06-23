#include <limits>
#include <iostream>

int binomial_coefficient(int m, int n) {
    if (m == 0 || m == n) {
        return 1;
    } else {
        return binomial_coefficient(m, n - 1) + binomial_coefficient(m - 1, n - 1);
    }
}

int main() {
    int m = 0, n = 0;

    std::cout << "Enter the m and n coefficients: ";
    while (!(std::cin >> m >> n) || std::cin.peek() != '\n' || m > n || m < 0 || n < 0) {
        if (m > n) {
            std::cout << "Error! Coefficient m cannot be greater than n!\n";
            std::cout << "Please enter valid values: ";
        } else if (m < 0 || n < 0) {
            std::cout << "Error! Coefficient cannot be less than zero!\n";
            std::cout << "Please enter valid values: ";
        } else {
            std::cout << "Error! Please enter valid values: ";
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Binomial coefficient is equal to: " << binomial_coefficient(m, n) << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
