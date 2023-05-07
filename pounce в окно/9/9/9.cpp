#include <iostream>
using namespace std;
const int SIZE = 12; // Размер массива B

int main() 
{
    setlocale(LC_ALL, "RUS");
    int B[SIZE] = { 4, 9, 2, 7, 1, 6, 3, 8, 5, 10, 12, 11 };
    int minIndex = 0; 
    int maxIndex = 0;

   
    cout << "Первоначальный массив B:" << endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << B[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < SIZE; i++) {
        if (B[i] < B[minIndex]) {
            minIndex = i;
        }
        if (B[i] > B[maxIndex]) {
            maxIndex = i;
        }
    }

    cout << "Максимальный элемент: " << B[maxIndex] << endl;
    cout << "Минимальный элемент: " << B[minIndex] << endl;

    int temp = B[minIndex];
    B[minIndex] = B[maxIndex];
    B[maxIndex] = temp;

    cout << "Массив B после замены:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
