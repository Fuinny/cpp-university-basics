#include <limits>
#include <iostream>

void tower_of_hanoi(int number, char source = 'A', char middle = 'B', char destination = 'C') {
    if (number == 1) {
        std::cout << "Move disk " << number << " from rod " << source << " to " << destination << '\n';
        return;
    }
    tower_of_hanoi(number - 1, source, destination, middle);
    std::cout << "Move disk " << number << " from rod " << source << " to " << destination << '\n';
    tower_of_hanoi(number - 1, middle, source, destination);
}

int main() {
    int number = 0;

    std::cout << "Enter the number of disks: ";
    while (!(std::cin >> number) || std::cin.peek() != '\n' || number <= 0) {
        if (number <= 0) {
            std::cout << "Error! Number of disks cannot be less than or equal to zero!\n";
            std::cout << "Please enter valid value: ";
        } else {
            std::cout << "Error! Please enter valid value: ";
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "\nSolution:\n";
    tower_of_hanoi(number);

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
