#include <iostream>
int main(){
    setlocale(LC_ALL,".UTF8");
    int(age);
    std::cout<<"Введите возраст ";
    std::cin >>age;
    if (age <0){
        std::cout<<"Некорректный возраст";
    } else if (age<=12){
        std::cout<<"Ребенок";
    }else if (age<=17){
        std::cout<<"Подросток";
    }else if (age<=64){
        std::cout<<"Взрослый";
    }else if (age>=65){
        std::cout<<"Пожилой";
    }
    return 0;
}