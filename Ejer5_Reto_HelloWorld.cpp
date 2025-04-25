#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número impar mayor o igual a 3: ";
    cin >> n;

    if (n<3 || n%2== 0) {
        cout << "El número debe ser impar y mayor o igual a 3." << endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            for (int j = 0; j < n; ++j) {
                cout << "* ";
            }
        } else {
            for (int j=0; j<i; ++j) {
                cout << " ";
            }

            cout << "*";

            int innerSpace=(n-i-1) * 2 - 1;

            if (innerSpace > 0) {
                for (int j=0; j<innerSpace; ++j) {
                    cout << " ";
                }
                cout << "*";
            }

            if (i<n-1) {
                for (int j=0; j<2*(i-1)+1; ++j) {
                    cout << " ";
                }
                if (i>0)
                    cout << "*";
            }

            if (i==n-1) {
                for (int j=1; j<n; ++j) {
                    cout << " *";
                }
            }
        }

        cout << endl;
    }

    return 0;
}

