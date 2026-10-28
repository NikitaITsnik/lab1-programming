// #include <iostream>
// #include <cmath>
// #include <iomanip>

// using namespace std;

// int main() {
//     setlocale(LC_ALL, ".UTF8");

//     float rost, ves;

//     cout << "Введите рост (метры): ";
//     cin >> rost;

//     if (rost <= 0 || rost > 3) {
//         cout << "Неправильные данные";
//         return 0;
//     }

//     cout << "Введите вес (килограммы): ";
//     cin >> ves;

//     if (ves <= 0 || ves > 1000) {
//         cout << "Неправильные данные";
//         return 0;
//     }

//     cout << fixed << setprecision(1)
//          << "ИМТ: " << ves / pow(rost, 2) << endl;

//     return 0;
// }

#include <iostream>
#include <iomanip>

int main() {
    setlocale(LC_ALL,".UTF8");
    int choice;
    double temp, result;

    std::cout << "1. C в F, 2. F в C: ";
    std::cin >> choice;
    std::cout << "Введите температуру: ";
    std::cin >> temp;

    if (choice == 1) {
        result = temp * 9 / 5 + 32;
        std::cout << std::fixed << std::setprecision(2)
                  << result << " F\n";
    } else if (choice == 2) {
        result = (temp - 32) * 5 / 9;
        std::cout << std::fixed << std::setprecision(2)
                  << result << " C\n";
    } else {
        std::cout << "Неверный выбор\n";
    }

    return 0;
}
