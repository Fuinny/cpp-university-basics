#include <iostream>

int main() {
    const int array_size = 10;
    int unsorted_array[array_size] = {5, 2, 4, 6, 1, 3, 9, 8, 7, 0};

    std::cout << "Rank sort:\n\n";

    int auxiliary_array[array_size];
    int sorted_array[array_size];

    for (int i = 0; i < array_size; i++) {
        int count = 0;

        for (int j = 0; j < array_size; j++) {
            if (unsorted_array[j] < unsorted_array[i] || (unsorted_array[j] == unsorted_array[i] && j < i)) {
                count++;
            }
        }

        auxiliary_array[i] = count;
    }

    std::cout << "Auxiliary array:\n\n";
    for (int k = 0; k < array_size; k++) {
        std::cout << auxiliary_array[k] << ' ';
    }
    std::cout << '\n';

    for (int i = 0; i < array_size; i++) {
        sorted_array[auxiliary_array[i]] = unsorted_array[i];
    }

    std::cout << "\nSorted array:\n\n";
    for (int i = 0; i < array_size; i++) {
        std::cout << sorted_array[i] << ' ';
    }
    std::cout << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}
