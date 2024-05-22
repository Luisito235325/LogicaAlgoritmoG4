#include <iostream>
#include "variables.h"

using namespace std;

/*
C - CREATE
R - READ
U - UPDATE
D - DELETE
*/

// CREATE

void addReg();
void addReg()
{
    cout << "Datos del estudiante";
    cout << "CIF: ";
    scanf(" %[^\n]", people[pos].cif);
    cout << "NOMBRES: ";
    scanf(" %[^\n]", people[pos].name);
    cout << "APELLIDOS: ";
    scanf(" %[^\n", people[pos].lastName);
    cout << "AÑO: ";
    scanf("%d", &people[pos].year);
    pos++;
}

void showReg();
void showReg()
{
    for (int i = 0; i < pos; i++)
    {
        printf("Nombre: %s %s \nAño: %d\n", people[i].name, people[i].lastName, people[i].year);
        cout << "****************************" << endl;
    }
}


void menu();
void menu()
{
    int op = 0;
    do
    {
        cout << "1. Agregar \n";
        cout << "2. Mostrar \n";
        cout << "3. Salir \n";
        cout << "Opcion: ";
        cin >> op;
        switch (op)
        {
        case 1:
            addReg();
            system("pause");
            break;
        case 2:
            showReg();
            system("pause");
            break;
        case 3:
        cout << "Saliendo";
        default:
        cout << "Opcion invalida";
            break;
        }
    } while (op != 3);
}