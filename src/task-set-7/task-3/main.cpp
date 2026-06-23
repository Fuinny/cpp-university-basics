#include <iostream>

int main() {
    const int array_size = 10;
    int unsorted_array[array_size] = {5, 2, 4, 6, 1, 3, 9, 8, 7, 0};

    std::cout << "Selection sort:\n\n";

    for (int i = 0; i < array_size; i++) {
        int min = i;

        for (int j = i; j < array_size; j++) {
            if (unsorted_array[j] < unsorted_array[min]) {
                min = j;
            }
        }

        int temp = unsorted_array[min];
        unsorted_array[min] = unsorted_array[i];
        unsorted_array[i] = temp;

        std::cout << "Pass " << i+1 << ": ";
        for (int k = 0; k < array_size; k++) {
            std::cout << unsorted_array[k] << ' ';
        }
        std::cout << '\n';
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}
