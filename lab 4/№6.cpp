#include <iostream>

int main() {
    setlocale(LC_ALL, ".UTF8");

    int year;
    std::cout << "Введите год: ";
    std::cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " - високосный год\n";
    } else {
        std::cout << year << " - не високосный год\n";
    }

    return 0;
}