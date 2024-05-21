#include <iostream>

using namespace std;

void esPar(int num);

main()
{
    int num;
    cout << "Introduce un numero: \n";
    cin >> num;
    esPar(num);
}

void esPar(int num)
{
    if (num % 2 == 0)
    {
        cout << ("El numero es par :\n");
    }
}