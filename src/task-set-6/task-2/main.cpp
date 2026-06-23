#include <cmath>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cstddef>

struct Point {
    double x;
    double y;
    double distance;
};

static bool compare_distance(Point first_point, Point second_point) {
    return first_point.distance > second_point.distance;
}

int main() {
    std::size_t n = 0;

    std::ifstream input_file("input.txt");
    if (!input_file) {
        std::cout << "Error! There's no input file provided!\n";
        std::cout << "\nPress ENTER key to exit...\n";
        std::cin.get();
        return 1;
    }

    input_file >> n;
    std::vector<Point> points(n);
    for (std::size_t i = 0; i < n; i++) {
        input_file >> points[i].x >> points[i].y;
        points[i].distance = std::sqrt(points[i].x * points[i].x + points[i].y * points[i].y);
    }
    input_file.close();

    std::sort(points.begin(), points.end(), compare_distance);

    std::ofstream output_file("output.txt");
    output_file << std::left << std::setw(20) << "Distance (x y)" << "| " << std::right << std::setw(10) << "Distance\n";
    output_file << std::string(20, '-') << "+" << std::string(10, '-') << '\n';
    for (std::size_t i = 0; i < n; i++) {
        std::ostringstream xy;
        xy << "(" << points[i].x << " " << points[i].y << ")";
        output_file << std::left << std::setw(20) << xy.str() << "| " << std::right << std::setw(10) << std::fixed << std::setprecision(2) << points[i].distance << '\n';
    }
    output_file.close();

    return 0;
}
