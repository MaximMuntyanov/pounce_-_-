#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    double a, b, c;
    cout << "Введите стороны треугольника (a, b, c): ";
    cin >> a >> b >> c;

    double alpha = (b + c - a) / (2 * b * c);
    double beta = (a + c - b) / (2 * a * c);
    double gamma = (a + b - c) / (2 * a * b);

    double p = (a + b + c) / 2;
    double radius = p / 4 * cos(acos(alpha) / 2) * cos(acos(beta) / 2) * cos(acos(gamma) / 2);

    cout << "Радиус описанной окружности: " << radius << endl;

    return 0;
}
