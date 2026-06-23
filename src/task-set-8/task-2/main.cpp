#include <limits>
#include <cstdint>
#include <vector>
#include <cstddef>
#include <fstream>
#include <iostream>

int main() {
    std::ifstream file;
    std::size_t total_row = 0, total_col = 0;

    file.open("matrix.txt");

    if (file.fail()) {
        std::cout << "Error! Could not open matrix file!\n";
        return 1;
    }

    file >> total_row >> total_col;

    std::vector<std::vector<int>> matrix(total_row, std::vector<int>(total_col));

    for (std::size_t i = 0; i < total_row; i++) {
        for (std::size_t j = 0; j < total_col; j++) {
            file >> matrix[i][j];
        }
    }

    file.close();

    std::size_t max_i = 0, max_j = 0;
    int max_element = std::numeric_limits<int32_t>::min();

    for (std::size_t i = 0; i < total_row; i++) {
        for (std::size_t j = 0; j < total_col; j++) {
            if (max_element < matrix[i][j]) {
                max_element = matrix[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    std::cout << "Biggest element: " << max_element << " (" << max_i << ", " << max_j << ")" << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}
