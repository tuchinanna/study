// Часть 1 - определить периметр правильного n-угольника, описанного около окружности радиуса r
#include <iostream>
#include <math.h>

int main()
{
    double r, p;
    int n;
    std::cout<<"Введите радиус окружности: "<<std::endl;
    std::cin>>r;
    std::cout<<"Введите количество сторон многоугольника: "<<std::endl;
    std::cin>>n;
    if (n<3) {
        std::cout<<"Ошибка"<<std::endl;
    } else {
        p = 2*n*r*tan(M_PI/n);
        std::cout<<"Периметр равен "<<p<<std::endl;
    }return 0;
}

