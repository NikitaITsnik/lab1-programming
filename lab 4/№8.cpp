#include <iostream>
int main (){
    setlocale(LC_ALL,".UTF8");
    int a;
    std::cout<<"Введите номер месяца \n";
    std::cin>>a;
    if ((a>=1 && a<=2) || (a==12)) {
        std::cout<<"Сезон - Зима";
    } else if (3<=a && a<=5){
        std::cout<<"Сезон - Весна";
    } else if (6<=a && a<=8) {
        std::cout<<"Сезон - Лето";
    } else if (9<=a && a<=11) {
        std::cout<<"Сезон - Осень";
    } else {
        std::cout<<"Такого месяца нет";
    }
    return 0;
}