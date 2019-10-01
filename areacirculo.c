/******************************************************************************

Realizar un programa en C que determine el area de un circulo

*******************************************************************************/
#include <stdio.h>

#define pi 3.1415

void main ()
{
    float radio = 0;
    float area = 0;
    printf ("Ingrese el radio \n");
    scanf ("%f", &radio);
    area = (2 * radio) * pi;
    printf ("El area es %f", area);
}
