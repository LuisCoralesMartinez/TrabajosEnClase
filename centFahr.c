/******************************************************************************

Hacer un programa que cambie los grados Fahrenheit a Centigrados y viceversa

*******************************************************************************/
#include <stdio.h>

int main()
{
    float cent, fahr, gradosCent = 0, gradosFahr = 0;
    int op;
    
    printf("1. Centigrados a Fahrenheit\n2. Fahrenheit a Centigrados\nEscoja opción: ");
    scanf("%i", &op);
    
    if(op == 1){
        printf("Ingrese los grados centigrados: ");
        scanf("%f", &cent);
        gradosFahr = (cent * 9 / 5) + 32;
        printf("%.2f °F", gradosFahr);
    }
    else
    {
        printf("Ingrese los grados fahrenheit: ");
        scanf("%f", &fahr);
        gradosCent = (fahr - 32) * 5/9 ;
        printf("%.2f °C\n", gradosCent);
    }
}
