#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "RUS");
    double x, y; 
    double R;    
    double N;       

    cout << "Введите координаты точки (x, y): ";
    cin >> x >> y;

    cout << "Введите радиус круга R: ";
    cin >> R;

    double distance = sqrt(x * x + y * y); 

    if (distance < R) 
    {
        N = 1; 
    }
    else if (distance == R) 
    {
        N = 2; 
    }
    else 
    {
        N = 3; 
    }

    double z1 = max((y * N), (x * y));
    double z2 = max((4 * N), (x + y));

    double Z = max(z1, z2);

    cout << "Признак точки: " << N << endl;
    cout << "Значение Z: " << Z << endl;

    return 0;
}