#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número impar mayor o igual a 5: ";
    cin >> n;

    if (n < 5 || n % 2 == 0) {
        cout << "El número debe ser impar y mayor o igual a 5." << endl;
        return 1;
    }

    int mid = n / 2;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == mid || j == mid || (i == 0 && (j >= mid || j == 0)) ||
                (i == n - 1 && (j <= mid || j == n - 1)) ||
                (j == 0 && i <= mid) || (j == n - 1 && i >= mid)
            ) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

