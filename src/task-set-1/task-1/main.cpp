#include <iostream>

int main() {
    int x = 0, y = 0;

    std::cout << "Enter x and y values: ";
    std::cin >> x >> y;

    if (x == y) {
        std::cout << "True - " << x << " is equal to " << y << '\n';
    } else {
        std::cout << "False - " << x << " is not equal to " << y << '\n';
    }

    return 0;
}
