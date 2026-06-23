#include <iostream>

int main() {
    const int array_size = 10;
    int unsorted_array[array_size] = {5, 2, 4, 6, 1, 3, 9, 8, 7, 0};

    std::cout << "Bubble sort:\n\n";

    for (int i = 0; i < array_size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < array_size - i - 1; j++) {
            if (unsorted_array[j] > unsorted_array[j+1]) {
                int temp = unsorted_array[j];
                unsorted_array[j] = unsorted_array[j+1];
                unsorted_array[j+1] = temp;
                swapped = true;
            }
        }

        std::cout << "Pass " << i+1 << ": ";
        for (int k = 0; k < array_size; k++) {
            std::cout << unsorted_array[k] << ' ';
        }
        std::cout << '\n';

        if (!swapped) {
            break;
        }
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}
