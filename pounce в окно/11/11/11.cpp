#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "RUS");
    const int SIZE = 6;
    double z[SIZE] = { 10.5, 12.3, 8.6, 11.2, 9.9, 7.8 };

    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += z[i];
    }

    double average = sum / SIZE;
    cout << "Средний объем поставки: " << average << endl;

    return 0;
}