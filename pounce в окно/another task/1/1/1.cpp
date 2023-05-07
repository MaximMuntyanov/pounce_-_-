#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "RUS");
    int a, b, c; 

    cout << "Введите значение a: ";
    cin >> a;

    cout << "Введите значение b: ";
    cin >> b;

    cout << "Введите значение c: ";
    cin >> c;

    int result = a * b + c;

    cout << "Результат: " << result << endl;

    return 0;
}
