#include <iostream>
using namespace std;

void formZ(int n) {
    for (int i=0; i<n; i++) {
        cout << "*";
    }
    cout << endl;
    
    for (int i=1; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    
    for (int i=0; i<n; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese un entero impar n>=3: ";
    cin >> n;
    
    if (n<3 || n%2== 0) {
        cout << "El numero debe ser impar y mayor e igual a 3" << endl;
    return 1;
    }
    
    formZ(n);
    return 0;
}
