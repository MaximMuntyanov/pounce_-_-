#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double S = 0;
    for (int k = 3; k <= 9; k += 2) {
        for (int i = 1; i <= 10; i++) {
            S += pow(i, 2) / (i + k);
            cout << "S = " << S << endl;
        }
    }
    cout << "\nS(final) = " << S << endl;
    return 0;
}