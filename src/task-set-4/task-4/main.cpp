#include <limits>
#include <iostream>

int main() {
    int weight = 0, fee = 10, stamps_10 = 0, stamps_4 = 0, stamps_1 = 0;

    std::cout << "Enter package weight in grams: ";
    while (!(std::cin >> weight) || std::cin.peek() != '\n' || weight <= 0) {
        if (std::cin.fail() || std::cin.peek() != '\n') {
            std::cout << "Error! Invalid input.\n";
        } else if (weight <= 0) {
            std::cout << "Error! Package weight must be greater than zero.\n";
        }
        std::cout << "Please enter a valid value: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   }

    fee += weight / 50 * 5;

    stamps_10 = fee / 10;
    stamps_4 = (fee - (stamps_10 * 10)) / 4;
    stamps_1 = (fee - (stamps_10 * 10)) % 4;

    std::cout << "\nPackage weight: " << weight << "g.\n";
    std::cout << "Postage fee: " << fee << " cents.\n";
    std::cout << "Total number of stamps: " << stamps_10 + stamps_4 + stamps_1 << '\n';
    std::cout << "Of which " << stamps_10 << " x 10 cents, " << stamps_4 << " x 4 cents, " << stamps_1 << " x 1 cent.\n";

    return 0;
}
