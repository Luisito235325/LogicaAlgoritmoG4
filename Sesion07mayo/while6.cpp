#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Ingresar un numero: ";
    cin >> num;
    int i = 0;

    while (i <= 12)
    {
        int resultado = 1 * num;
        cout << num << " * " << i << " = " << resultado << endl;
        i++;
    }
    return 0;
}
