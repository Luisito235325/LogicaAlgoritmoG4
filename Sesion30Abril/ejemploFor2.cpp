#include <iostream>

/*Leer 5 numeros y mostrarlos*/

using namespace std;

#define MAX 5

int numeros[MAX];
int fila;

void agregar(int num);
void mostrar();

main()
{
    int cant, num;

    cout << "Cuantos numeros desea ingresar: " << endl;
    cin >> cant;
    for (int i = 0; i < cant; i++)
    {
        cout << "Dime un #: " << endl;
        cin >> num;
        agregar(num);
    }

    cout << "Mostrar elementos" << endl;
    mostrar();
} 

void agregar(int num)
{
    if (fila <= MAX)
    {
        cout << "No se pueden agregar numeros" << endl;
        
    }
    else
    {
        numeros[fila] = num;
        fila++;
    }
}

void mostrar()
{
    if (fila == 0)
    {
        cout << "No hay elementos" << endl;
    }
    else
    {
        for (int i = 0; i < fila; i++)
        {
            cout << numeros[i] << endl;
        }
    }
}