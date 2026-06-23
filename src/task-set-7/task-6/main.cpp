#include <iostream>

int binary_search(int array[], int key, int low, int high) {
    while (low <= high) {
        int middle = low + (high - low) / 2;

        if (key == array[middle]) {
            return middle + 1;
        } else if (key > array[middle]) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }

    return low;
}

int main() {
    const int array_size = 10;
    int unsorted_array[array_size] = {5, 2, 4, 6, 1, 3, 9, 8, 7, 0};

    for (int i = 1; i < array_size; i++) {
        int key = unsorted_array[i];
        int j = i - 1;

        int location = binary_search(unsorted_array, key, 0, j);

        while (j >= location) {
            unsorted_array[j + 1] = unsorted_array[j];
            j--;
        }

        unsorted_array[j + 1] = key;

        std::cout << "Pass " << i << ": ";
        for (int k = 0; k < array_size; k++) {
            std::cout << unsorted_array[k] << ' ';
        }
        std::cout << '\n';
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}
