#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "RUS");
    int number;
    cout << "Введите число: ";
    cin >> number;

    if (number % 2 == 0) {
       cout << "Число четное.\n";
    }
    else {
        cout << "Число нечетное.\n";
    }
    return 0;
}
