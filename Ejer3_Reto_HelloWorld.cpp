#include <iostream>
#include <string>
using namespace std;

void imprPatron(int n) {
    cout << "***" << string(n-3, ' ') << endl;
    
    cout << "* *" << string(n-3, ' ') << endl;
    
    cout << string(n, '*') << endl;
    
    cout << string(n-3, ' ') << "* *" << endl;
    
    cout << string(n-3, ' ') << "***" << endl;
}

int main() {
    int n;
    cout << "Ingrese un entero impar n>=5: ";
    cin >> n;
    
    if (n<5 || n%2== 0) {
        cout << "Error: n debe ser impar y >=5" << endl;
        return 1;
    }
    
    imprPatron(n);
    return 0;
}
