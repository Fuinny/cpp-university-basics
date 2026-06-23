#include <iostream>

int main() {
    const int array_size = 10;
    int unsorted_array[array_size] = {5, 2, 4, 6, 1, 3, 9, 8, 7, 0};

    int pass = 0;
    int start = 0;
    int end = array_size - 1;
    bool swapped = true;

    while (swapped) {
        swapped = false;

        for (int i = start; i < end; i++) {
            if (unsorted_array[i] > unsorted_array[i+1]) {
                int temp = unsorted_array[i];
                unsorted_array[i] = unsorted_array[i+1];
                unsorted_array[i+1] = temp;
                swapped = true;
            }
        }

        std::cout << "Pass " << ++pass << " (Right): ";
        for (int k = 0; k < array_size; k++) {
            std::cout << unsorted_array[k] << ' ';
        }
        std::cout << '\n';

        if (!swapped) {
            break;
        }

        end--;
        swapped = false;

        for (int i = end; i > start; i--) {
            if (unsorted_array[i] < unsorted_array[i-1]) {
                int temp = unsorted_array[i];
                unsorted_array[i] = unsorted_array[i-1];
                unsorted_array[i-1] = temp;
                swapped = true;
            }
        }

        std::cout << "Pass " << ++pass << " (Left):  ";
        for (int k = 0; k < array_size; k++) {
            std::cout << unsorted_array[k] << ' ';
        }
        std::cout << '\n';

        start++;
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}
