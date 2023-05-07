#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    int A[20] = { 1, -2, 3, 4, 0, -5, 6, -7, 8, -9, -10, 11, 0, 12, -13, 14, 15, 0, -16, 17 };
    int B[20];
    int j = 0;

    for (int i = 0; i < 20; i++) {
        if (A[i] > 0) {
            B[j] = i + 1; // добавляем номер положительного элемента в массив B
            j++;
        }
    }

    cout << "Массив A: ";
    for (int i = 0; i < 20; i++) {
        cout << A[i] << " ";
    }

    cout << endl << "Массив B: ";
    for (int i = 0; i < j; i++) { // выводим только заполненные элементы массива B
        cout << B[i] << " ";
    }

    return 0;
}