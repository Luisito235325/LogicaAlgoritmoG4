#include <stdio.h>

/*Leer la edad de una persona y decir si es niño <13
joven >= 13 <21, adulto >=21 */

void evaluarEdad(int edad);

int main(int argc, char const *argv[])
{
    int op, edad;
    printf("1. Evaluar edad\n");
    printf("2.salir\n");
    printf("opcion: \n");
    scanf("%d", &op);
    switch(op){
        case 1:
        printf("Dime tu edad: \n");
        scanf("%d",& edad);
        evaluarEdad(edad);
        break;
            case 2:
            break;
            default:
            printf("opcion invalida\n");
    }
    if(op!=2){
        main(0,0);
    }
    return 0;
}

void evaluarEdad(int edad)
{
    if (edad >=0 && edad < 13)
        printf("Eres un niño....\n");
    
    else if ( edad >= 13 && edad <21)
        printf("Eres un joven....\n");
    
    else if (edad <= 21)
        printf("Es un adulto...\n");
    else 
        printf("Edad invalida...\n");
       
}