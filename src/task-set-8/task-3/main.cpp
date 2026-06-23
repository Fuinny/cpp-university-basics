#include <vector>
#include <cstddef>
#include <fstream>
#include <iostream>

int main() {
    std::ifstream file;
    std::ofstream result;
    std::size_t total_row = 0, total_col = 0;

    file.open("matrix.txt");

    if (file.fail()) {
        std::cout << "Error! Could not open matrix file!\n";
        return 1;
    }

    file >> total_row >> total_col;

    std::vector<std::vector<int>> first_matrix(total_row, std::vector<int>(total_col));
    std::vector<std::vector<int>> second_matrix(total_row, std::vector<int>(total_col));

    for (std::size_t i = 0; i < total_row; i++) {
        for (std::size_t j = 0; j < total_col; j++) {
            file >> first_matrix[i][j];
        }
    }

    for (std::size_t i = 0; i < total_row; i++) {
        for (std::size_t j = 0; j < total_col; j++) {
            file >> second_matrix[i][j];
        }
    }

    file.close();

    result.open("result.txt");
    if (result.fail()) {
        std::cout << "Error! Could not open result file!\n";
        return 1;
    }

    result << "Total sum:\n";

    for (std::size_t i = 0; i < total_row; i++) {
        for (std::size_t j = 0; j < total_col; j++) {
            result << first_matrix[i][j] + second_matrix[i][j]<< ' ';
        }
        result << '\n';
    }

    result.close();

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}
