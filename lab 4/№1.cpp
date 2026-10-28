#include <iostream>

int main(){
    setlocale(LC_ALL,".UTF8");
    int number;
    std::cout<<"Введите число ";
    std::cin>>number;
    if (number%2==0){
        std::cout<<"Число "<<number<<"-Четное\n";
    } else{
        std::cout<<"Число "<<number<<"-Нечетное\n";
    }
    return 0;
}