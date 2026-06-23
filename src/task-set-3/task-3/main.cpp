#include <iomanip>
#include <iostream>

int main() {
    double height = 0.0, weight = 0.0;

    std::cout << "Enter your height(cm) and weight(kg): ";
    std::cin >> height >> weight;

    if (height <= 0 || weight <= 0) {
        std::cout << "Error! Height and weight must be greater than zero.\n";
        return 1;
    }

    double bmi = weight / ((height / 100) * (height / 100));

    std::cout << "The BMI is " << std::fixed << std::setprecision(2) << bmi << " which means ";

    if (bmi < 18.5) {
        std::cout << "Underweight\n";
    } else if (bmi < 25.0) {
        std::cout << "Healthy\n";
    } else if (bmi < 30.0) {
        std::cout << "Overweight\n";
    } else if (bmi < 35.0) {
        std::cout << "Obese Class I\n";
    } else if (bmi < 40.0) {
        std::cout << "Obese Class II\n";
    } else {
        std::cout << "Obese Class III\n";
    }

    return 0;
}
