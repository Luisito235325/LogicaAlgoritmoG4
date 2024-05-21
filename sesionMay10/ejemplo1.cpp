#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num = 0, suma = 0;

    while (num >= 0)
    {
        suma += num;
        cout << "Dime un #: " << endl;
        cin >> num;
    }
    cout << "la suma es: " << suma << endl;
    return 0;
}+