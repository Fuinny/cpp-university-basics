#include <limits>
#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return factorial(n - 1) * n;
}

int main() {
    int number = 0;

    std::cout << "Enter the number: ";
    while (!(std::cin >> number) || std::cin.peek() != '\n' || number < 0) {
        if (number < 0) {
            std::cout << "Error! Number cannot be less than zero!\n";
            std::cout << "Please enter valid value: ";
        }
        else {
            std::cout << "Error! Please enter the valid value: ";
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << number << "! = " << factorial(number) << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
