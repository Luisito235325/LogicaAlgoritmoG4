#include <iostream>

using namespace std;
int main() {
    int c, n;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    cout << "Números impares entre " << c << " y " << n << ":\n";
    for (int i = c; i <= n; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
