#include <limits>
#include <iostream>

double total_sum() {
    double number = 0.0;

    std::cout << "Enter a sequence of numbers (enter a negative number to stop): ";
    while (!(std::cin >> number) || std::cin.peek() != '\n') {
        std::cout << "Error! Please enter valid sequence: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max());
    }

    if (number < 0) return 0;
    else return number + total_sum();
}

int main() {
    std::cout << "Total sum of provided numbers is equal to: " << total_sum() << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
