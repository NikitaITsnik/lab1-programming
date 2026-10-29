#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    setlocale(LC_ALL,".UTF8");
    cout << "Конвертер валют\n";
    cout << "1. Перевод USD в RUB\n";
    cout << "2. Перевод EUR в RUB\n";
    cout << "3. Перевод RUB в USD\n";
    cout << "4. Перевод RUB в EUR\n";
int choice;
cout << "Ваш выбор (1-4): ";
cin >> choice;

cout << fixed << setprecision(2);

if (choice == 1) {
    double usd;
    cout << "Введите сумму в USD: ";
    cin >> usd;

    double rub = usd * 92.5;
    cout << usd << " USD = " << rub << " RUB\n";

} else if (choice == 2) {
    double eur;
    cout << "Введите сумму в EUR: ";
    cin >> eur;

    double rub = eur * 100.0;
    cout << eur << " EUR = " << rub << " RUB\n";

} else if (choice == 3) {
    double rub;
    cout << "Введите сумму в RUB: ";
    cin >> rub;

    double usd = rub / 92.5;
    cout << rub << " RUB = " << usd << " USD\n";

} else if (choice == 4) {
    double rub;
    cout << "Введите сумму в RUB: ";
    cin >> rub;

    double eur = rub / 100.0;
    cout << rub << " RUB = " << eur << " EUR\n";

} else {
    cout << "Некорректный выбор\n";
}

return 0;
}
