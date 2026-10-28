#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    setlocale(LC_ALL, ".UTF8");
    char opp;

    double a, b;

    std::cout << "Введите первое чисо: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >>opp;
    
    std::cout<<std::fixed<<std::setprecision(2);

    switch (opp) {
        case '+':
            std::cout<<"Результат "<<a+b;
            break;

        case '-':
            std::cout<<"Результат "<<a-b;
            break;
        
        case '*':
            std::cout<<"Результат "<<a*b;
            break;
        
        case '/':
            if (b==0) {
                std::cout<<"Ошибка деления на 0";
            } else {
                std::cout<<"Результат "<< a/b;
            }
            break;
        default:
            std::cout<<"Неизвестная операция";
    }
    return 0;

}