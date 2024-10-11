// Часть 2 - Даны радиус круга и сторона квадрата, y какой фигуры площадь больше?
#include <iostream>
#include <math.h>
int main()
{
    int r, a, S2; // r - радиус круга, a - сторона квадрата, S2 - площадь квадрата
    double S1; // S1 - площадь круга
    std::cout<<"Введите радиус круга: "<<std::endl;
    std::cin>>r;
    std::cout<<"Введите сторону квадрата: "<<std::endl;
    std::cin>>a;
    S1 = M_PI*r*r;
    S2 = a*a;
    if (S1==S2) {
        std::cout<<"Площадь круга равна площади квадрата"<<std::endl;
    } else if (S1>S2) {
        std::cout<<"Площадь круга больше площади квадрата"<<std::endl;
    } else
        std::cout<<"Площадь квадрата больше площади круга"<<std::endl;
    return 0;
}