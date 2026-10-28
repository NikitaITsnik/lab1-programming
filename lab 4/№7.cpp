#include <iostream>

int main() {
    // Поддержка русского языка в консоли
    setlocale(LC_ALL, ".UTF8");

    double a, b, c;
    std::cout << "Введите сторону a: ";
    std::cin >> a;
    std::cout << "Введите сторону b: ";
    std::cin >> b;
    std::cout << "Введите сторону c: ";
    std::cin >> c;

    // Проверяем условие существования треугольника
    if (a + b > c && a + c > b && b + c > a) {
        // Проверяем тип треугольника
        if (a == b && b == c) {
            std::cout << "Равносторонний треугольник\n";
        } else if (a == b || a == c || b == c) {
            std::cout << "Равнобедренный треугольник\n";
        } else {
            std::cout << "Разносторонний треугольник\n";
        }
    } else {
        std::cout << "Треугольник не существует\n";
    }

    return 0;
}