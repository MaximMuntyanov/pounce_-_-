#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "RUS");

    double x, a; 
    double w;    
    double Z;    

    cout << "Введите значение x: ";
        cin >> x;

    cout << "Введите значение a: ";
        cin >> a;

    bool condition = (x <= a);

    if (condition) 
    {
        w = std::pow(x, 3);
    }
    else 
    {
        switch (condition) 
        {
        case false:
            w = sin(abs(x));
            break;
        }
    }

    Z = 1.93 * pow(10, -3) * pow(log(x/(w + 1)),2);

    cout << "Значение Z: " << Z << endl;

    return 0;
}
