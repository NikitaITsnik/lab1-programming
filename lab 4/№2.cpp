#include <iostream>
int main(){
    setlocale(LC_ALL,".UTF8");
    double a,b,c;
    std::cout<<"Введите число a ";
    std::cin>>a;
    std::cout<<"Введите число b ";
    std::cin>>b;
    std::cout<<"Введите число c ";
    std::cin>>c;
    double maximum;
    if (a>=b && a>=c){
        maximum=a;
    } else if (b>=a && b>=c){
        maximum=b;
    } else{
        maximum=c;
    }
    std::cout<<"Максимальное число "<<maximum;

    return 0;
}