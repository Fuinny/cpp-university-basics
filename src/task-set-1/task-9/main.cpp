#include <iostream>

int main() {
    int number = 0, hundredths = 0, tenths = 0, units = 0;

    std::cout << "Enter a three-digit number: ";
    std::cin >> number;

    hundredths = number / 100;
    tenths = number / 10 % 10;
    units = number % 100 % 10;

    std::cout << "The sum of the numbers is: " << hundredths + tenths + units << '\n';

    return 0;
}
