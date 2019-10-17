/******************************************************************************

Realizar un programa que 

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont, tabla, lim, mult = 0;
    
    printf("Ingrese la tabla: ");
    scanf("%d", &tabla);
    
    printf("Ingrese la tabla: ");
    scanf("%d", &tabla);
    
    for(cont = 1; cont <= lim; cont++){
        mult = tabla * cont;
        printf("%i x %i = %i", tabla, cont, mult);
    }
    
}
