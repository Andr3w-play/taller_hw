#include <iostream>
using namespace std;

int main() {
    int n;

    // Solicitar entrada
    cout << "Ingrese un número impar mayor o igual a 5: ";
    cin >> n;

    // Validar entrada
    if (n < 5 || n % 2 == 0) {
        cout << "El número debe ser impar y mayor o igual a 5." << endl;
        return 1;
    }

    int mid = n / 2;

    for (int i = 0; i < n; ++i) {
        if (i < mid) {
            // Parte superior
            for (int j = 0; j < mid - i; ++j) cout << "*";
            for (int j = 0; j < i * 2 + 1; ++j) cout << " ";
            for (int j = 0; j < i + 1; ++j) cout << "*";
        } else if (i == mid) {
            // Fila del medio
            for (int j = 0; j < n; ++j) cout << "*";
        } else {
            // Parte inferior
            int down = i - mid;
            for (int j = 0; j < down + 1; ++j) cout << "*";
            for (int j = 0; j < (n - 2 * (down + 1)); ++j) cout << " ";
            for (int j = 0; j < mid - down; ++j) cout << "*";
        }
        cout << endl;
    }

    return 0;
}

