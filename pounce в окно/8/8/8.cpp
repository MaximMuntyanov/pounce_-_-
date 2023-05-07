#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 3.8;
    double x = 3;
    double y;

    do {
        if (x < a) 
        {
            y = tan(x) + sin(x);
        }
        else 
        {
            y = sin(x);
        }
        cout << "x = " << x << ", y = " << y << endl;
        x += 0.2;

    } while (x <= 5.2);

    return 0;
}
