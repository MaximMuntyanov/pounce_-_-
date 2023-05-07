#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double y;
    cout << "Введите у: ";
        cin >> y;
    double z;
     cout << "Введите z: ";
        cin >> z;
    double x = 1.7;
    double a = 2.4;
    double b = 3.12;

    double T = 0.0, Z = 0.0, Y = 0.0, Q = 0.0; //для хранения вычислений
    T = pow(x, 2) * y + cos(y * x) + pow(exp(1), 3 * 5 * z) + pow(sin(x), 2); //вычисляем Т
    cout << "T: " << T << endl; 

    Z = (tan(2 * x) + 0.7) / (3.7 * pow(10, -1) * log(abs(b * x))); //вычисляем Z
    cout << "Z: " << Z << endl;

    Y = sqrt(log(4 * x)) + pow(4, 2 * x) + cos(pow(x, 2)); //вычисляем Y
    cout << "Y: " << Y << endl;

    Q = cbrt((pow(a,2)) + b * x) - acos(4*x); //вычисляем Q
    cout << "Q: " << Q << endl;
}