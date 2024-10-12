//Вычислить с заданной точностью (E=10-2,..., 10-8): sqrt(2)
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    for (double eps = 1e-2; eps >= 1e-8; eps /= 10)
    {
        double sqr_rt = sqrt(2);
        double sqr_rt_1 = 0.1;
        double tp = 2.;
        int i = 0;
        while (abs(sqr_rt - 1 - (1/sqr_rt_1)) > eps) {
            sqr_rt_1 = 2 + 1/tp;
            tp = sqr_rt_1;
            i++;
        }
        cout << setprecision(10) << setw(12) << (1/sqr_rt_1) + 1 << "(accuracy = " << eps << ")" << " i = " << i << endl;
    }
    return 0;
}
