#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, ".UTF8");

    float rost, ves;

    cout << "Введите рост (метры): ";
    cin >> rost;

    if (rost <= 0 || rost > 3) {
        cout << "Неправильные данные";
        return 0;
    }

    cout << "Введите вес (килограммы): ";
    cin >> ves;

    if (ves <= 0 || ves > 1000) {
        cout << "Неправильные данные";
        return 0;
    }

    cout << fixed << setprecision(1)
         << "ИМТ: " << ves / pow(rost, 2) << endl;

    return 0;
}