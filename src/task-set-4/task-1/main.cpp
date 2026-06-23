#include <cmath>
#include <limits>
#include <iostream>

struct Date {
    int day, month, year;

    bool is_leap_year() const {
        if (year < 1582) {
            return (year % 4 == 0);
        }

        return (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
    }

    int get_days_in_month() const {
        const int days_in_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        return ((month == 2) && is_leap_year() ? 29 : days_in_month[month - 1]);
    }

    bool is_valid() const {
        if (year < 1 || month < 1 || month > 12 || day < 1) {
            return false;
        } else if (day > get_days_in_month()) {
            return false;
        } else if (year == 1582 && month == 10 && day >= 5 && day <= 14) {
            return false;
        } else {
            return true;
        }
    }

    int count_days() const {
        int total_days = day;

        for (int y = 1; y < year; y++) {
            total_days += (Date{ 1, 1, y }.is_leap_year() ? 366 : 365);
        }

        for (int m = 1; m < month; m++) {
            total_days += (Date{ 1, m, year }.get_days_in_month());
        }

        if ((year > 1582) || (year == 1582 && month > 10) || (year == 1582 && month == 10 && day >= 15)) {
            total_days -= 10;
        }

        return total_days;
    }
};

int calculate_difference(const Date& first_date, const Date& second_date) {
    return std::abs(first_date.count_days() - second_date.count_days());
}

Date get_valid_date() {
    int user_day = 0, user_month = 0, user_year = 0;

    std::cout << "Enter date (dd mm yyyy): ";
    while (true) {
        if (std::cin >> user_day >> user_month >> user_year && std::cin.peek() == '\n') {
            Date date = { user_day, user_month, user_year };
            if (date.is_valid()) return date;
        }

        std::cout << "Error! Invalid date. Please enter a valid date: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

int main() {
    Date first_date = get_valid_date();
    Date second_date = get_valid_date();

    int difference = calculate_difference(first_date, second_date);

    std::cout << "Difference in days: " << difference << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
