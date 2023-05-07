#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "RUS");
    const int N = 10;
    int A, B;
    cout << "Введите через пробел два первых числа массива: ";
    cin >> A >> B;
    int C[N];
    C[0] = A;
    C[1] = B;

    for (int i = 2; i < N; i++) {
        C[i] = C[i - 1] + C[i - 2];
    }

    cout << "Массив: ";
    for (int i = 0; i < N; i++) {
        cout << C[i] << " ";
    }

    return 0;
}