#include <iostream>

int main() {
    int first_number = 0, second_number = 0, mode = 0;

    std::cout << "Which swapping method to use:\n";
    std::cout << "\t1. Using temporary variable\n";
    std::cout << "\t2. Without using temporary variable\n";
    std::cout << "\t3. Using XOR swapping\n";
    std::cout << "\nYour choice: ";
    std::cin >> mode;

    std::cout << "Enter two numbers: ";
    std::cin >> first_number >> second_number;

    std::cout << "\nFirst number: " << first_number << '\n';
    std::cout << "Second number: " << second_number << '\n';

    if (mode == 1) {
        std::cout << "\nSwapping using temporary variable...\n";
        int temp = first_number;
        first_number = second_number;
        second_number = temp;
    }
    else if (mode == 2) {
        std::cout << "\nSwapping without using temporary variable...\n";
        first_number = first_number + second_number;
        second_number = first_number - second_number;
        first_number = first_number - second_number;
    }
    else if (mode == 3) {
        std::cout << "\nSwapping using XOR...\n";
        first_number = first_number ^ second_number;
        second_number = first_number ^ second_number;
        first_number = first_number ^ second_number;
    } else {
        std::cout << "\nError! Invalid option!\n";
        return 1;
    }

    std::cout << "\nFirst number: " << first_number << '\n';
    std::cout << "Second number: " << second_number << '\n';

    return 0;
}
