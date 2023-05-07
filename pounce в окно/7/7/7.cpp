#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 2.8;
    double b = 0.45;
    double x = 4.5;
    double y;

    cout << "x\t|\ty\n";
    cout << "-----------------------\n";

    while (x <= 10.5) 
    {
        y = (a * x - b) / log(x);
        cout << x << "\t|\t" << y << "\n";
        x += 0.5;
    }

    return 0;
}