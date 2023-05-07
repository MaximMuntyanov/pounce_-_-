#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "RUS");
    double x; 
    double result; 


    cout << "Введите значение x: ";
    cin >> x;

    if (x < 0) 
    {
        result = abs(x);
    }
    else if (x >= 0 && x < 5) 
    {
        result = sqrt(x);
    }
    else 
    {
        result = pow(x, 2);
    }

    cout << "Результат: " << result << endl;

    return 0;
}
