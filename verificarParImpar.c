/******************************************************************************

Realizar un programa que verifique si un numero es par o impar

*******************************************************************************/
#include <stdio.h>

void main ()
{
    int numero, cont = 1, cantNum;

    printf ("Ingrese la cantidad de numeros: ");
    scanf ("%i", &cantNum);

    while (cont <= cantNum)
    {
        printf ("Ingrese un numero: ");
        scanf ("%i", &numero);
        
        while(numero < 0)
        {
            printf ("Ingrese un numero positivo: ");
            scanf ("%i", &numero);
        }
        
        if(numero % 2 == 0)
        {
            printf ("Es par\n");
        }
        else
        {
            printf("Es impar\n");
            
        }
        cont++;
    }
}
