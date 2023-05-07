#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "RUS");
    int N, M;
    double z = 0;

    cout << "Введите N и M: ";
    cin >> N >> M;

    if (M >= 7) { cout << "Ошибка: деление на ноль в Σ[i -> M] " << endl; }
    else
    {
        for (int i = 1; i <= N; i++) {
            double term = i / (3.0 * i - 7);
            if (!isfinite(term)) {
                cout << "Ошибка: деление на ноль или переполнение" << endl;
                return 1;
            }
            z += term;
        }

        for (int i = 1; i <= M; i++) {
            double term = (3.0 * i * i + i - 8) / (7.0 - i);
            if (!isfinite(term)) {
                cout << "Ошибка: деление на ноль или переполнение" << endl;
                return 1;
            }
            z += term;
        }
    }
    cout << "z = " << z << endl;

    return 0;
}