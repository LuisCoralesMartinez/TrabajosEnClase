/******************************************************************************

Realizar un programa en C que determine el area de un circulo

*******************************************************************************/
#include <stdio.h>

#define pi 3.1416

void main ()
{
    float radio = 0;
    float area = 0;
    printf ("Ingrese el radio \n");
    scanf ("%f", &radio);
    //area = radio * radio * pi;
    //area = (2 * radio) * pi;
    area = pi * pow(radio, 2);
    printf ("El area es %.2f", area);
}
