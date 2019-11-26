/******************************************************************************

Realizar un programa que determine si la persona es menor a mayor de edad

Datos de entrada:
Entero Edad
Char nombre

Proceso:
Escribir "Ingrese su edad"
Leer edad
si(edad < 18)
    Escribir "Es menor"
else 
    Escribir "Es mayor"

Salida:
Escribir "Es mayor", "Es menor"

*******************************************************************************/
#include <stdio.h>

int main()
{
    int edad;
    char nombre[20];
    printf("Ingrese su nombre: ");
    //scanf("%s", nombre);
    gets(nombre);
    printf("Ingrese su edad: ");
    scanf("%i", &edad);
    
    if(edad < 18)
    {
        printf("%s es menor", nombre);
    }
    else
    {
        printf("%s es mayor", nombre);
    }
    
}
