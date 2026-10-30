#include <iostream>
#include <string>
using namespace std; // Примечание: в коде на скрине опечатка "namespace namespace std;"

string toBase(int n, int base) {
    setlocale(LC_ALL,".UTF8");
    if (n == 0) return "0";

    string digits = "0123456789ABCDEF";
    string result = "";
    bool negative = false;

    if (n < 0) {
        negative = true;
        n = -n;
    }

    while (n > 0) {
        result = digits[n % base] + result;
        n /= base;
    }

    return negative ? "-" + result : result;
}

int main() {
    setlocale(LC_ALL,".UTF8");
    int number;
    cout << "Введите целое число в десятичной системе: ";
    cin >> number;

    cout << "Десятичное:         " << number << endl;
    cout << "Двоичное:           " << toBase(number, 2) << endl;
    cout << "Восьмеричное:       " << toBase(number, 8) << endl;
    cout << "Шестнадцатеричное: " << toBase(number, 16) << endl;

    return 0;
}
