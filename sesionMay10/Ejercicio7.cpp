#include <iostream>
/*Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego los ordene en forma ascendente utilizando el
algoritmo de ordenamiento de burbuja.*/
using namespace std;

void orden(int arreglo[], int n);

int main() {
    int arreglo[5];
    int i = 0;

    cout << "Ingrese 5 numeros enteros:\n";
    while (i < 5) {
        cin >> arreglo[i];
        i++;
    }

    orden(arreglo, 5);

    cout << "Numeros ordenados en forma ascendente:\n";
    for (int i = 0; i < 5; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}

void orden(int arreglo[], int n) {
    int i = 0;
    int cambios = -1;
    while (cambios != 0) {
        cambios = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
                cambios++;
            }
        }
        i++;
    }
}
