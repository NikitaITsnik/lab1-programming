#include <iostream>
#include <string>
int main()
{

    setlocale(LC_ALL, ".UTF8");
    int a,b;
    std::cout << "ввеите переменную a: ";
    std::cin >> a;

    std::cout << "введите переменную b: ";
    std::cin >> b;

    std::cout << "переменная a = " << a << ", переменная b = " << b;
    return 0;
}