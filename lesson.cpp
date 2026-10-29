#include <iostream>
#include <cmath>     // Необходимо для std::pow
#include <iomanip>   // Необходимо для настройки вывода больших чисел

int main() {
    setlocale(LC_ALL, ".UTF8");

    //ввод числа
    int a, b;
    std::cout << "введи число a: ";
    std::cin >> a;
    std::cout << "введи число b: ";
    std::cin >> b;

    //вывод операций с числами
    std::cout << "Сумма: " << a + b << '\n';
    std::cout << "Разность: " << a - b << '\n';
    std::cout << "Произведение: " << a * b << '\n';
    
    //проверка что делители не равный 0
    if (b != 0) {
        std::cout << "Деление: " << a / b << '\n';
        std::cout << "Остаток: " << a % b << '\n';
    } else {
        std::cout << "Деление: На ноль делить нельзя!\n";
        std::cout << "Остаток: На ноль делить нельзя!\n";
    }

    // Отключаем экспоненциальный формат (e+06) для красивого вывода степени
    std::cout << "Степень: " << std::fixed << std::setprecision(0) << std::pow(a, b) << '\n';

    return 0;
}
