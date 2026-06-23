#include <cmath>
#include <fstream>
#include <iostream>

int main() {
    double max_distance = 0.0;
    int n = 0, x = 0, y = 0, max_x = 0, max_y = 0;

    std::ifstream input_file("input.txt");
    if (!input_file) {
        std::cout << "Error! There's no input file provided!\n";
        std::cout << "\nPress ENTER key to exit...\n";
        std::cin.get();
        return 1;
    }

    input_file >> n;
    for (int i = 0; i < n; i++) {
        input_file >> x >> y;

        double current_distance = std::sqrt(x * x + y * y);
        if (max_distance < current_distance) {
            max_x = x;
            max_y = y;
            max_distance = current_distance;
        }
    }
    input_file.close();

    std::ofstream output_file("output.txt");
    output_file << "Max X: " << max_x << '\n';
    output_file << "Max Y: " << max_y << '\n';
    output_file << "Max distance: " << max_distance << '\n';
    output_file.close();

    return 0;
}
