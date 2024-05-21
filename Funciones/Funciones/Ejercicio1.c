#include <stdio.h>

void pantalla(float *horasTrab, float *pagoHora);
float calcularSal (float horasTrab, float pagoHora);


int main(int argc, char const *argv[])
{
    float horasTrab, pagoHora, salario;

    pantalla (&horasTrab, &pagoHora);
    
    salario = calcularSal(horasTrab, pagoHora);

    printf("Tu salario es: %.2f\n");
    return 0;
}

void pantalla (float *horasTrab, float *pagoHora)
{
    printf("Cuantas horas has trabajado?\n");
    scanf("%f", & horasTrab);
    printf("Cuanto pagan por hora?\n");
    scanf("%f", & pagoHora);
}

float calcularSal ( float horasTrab, float pagoHora)
{
    return horasTrab * pagoHora;
}