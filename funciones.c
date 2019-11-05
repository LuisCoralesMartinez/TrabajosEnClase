/******************************************************************************

Ejercicio de funciones

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float areaCir(float);
int factorial(int);
int tablaMult(int, int);
void parImpar(int);

void main()
{
    float rad;
    int num, tabla, lim, op;
    
    do
    {
        printf("Escoge un opcion\n1. Factorial\n2. Area de un circulo\n3. Tabla de multiplicar\n4. Par o impar\n5. Salir\n");
        scanf("%i", &op);
        
        switch(op)
        {
            case 1:
                printf("Factorial de un numero\nIngrese un numero entero: ");
                scanf("%i", &num);
                printf("El factorial es %i\n\n", factorial(num));
                getchar();
                getchar();
                system("clear");
            break;
            
            case 2:
                printf("Area de un circulo\nIngrese el radio: ");
                scanf("%f", &rad);
                printf("El área del ciruclo es %.2f\n\n", areaCir(rad));
                getchar();
                getchar();
                system("clear");
            break;
            
            case 3:
                printf("Tabla de multiplicar\nIngrese la tabla: ");
                scanf("%i", &tabla);
                printf("Ingrese el limite: ");
                scanf("%i", &lim);
                tablaMult(tabla, lim);
                getchar();
                getchar();
                system("clear");
            break;
            
            case 4:
                printf("Ingrese un numero entero: ");
                scanf("%i", &num);
                parImpar(num);
                getchar();
                getchar();
                system("clear");
            break;
            
            case 5:
                printf("Ha salido del programa");
                exit(0);
            break;
            
            default:
                printf("Opcion no valida\n");
            break;
        }
    }while(op != 5);
}

float areaCir(float rad)
{
    float area = 0, pi = 3.1416;

    area = pow(rad, 2) * pi;
    
    return area;
}

int factorial(int num)
{
    int fact = 1, cont = 1;
    
    while(cont <= num)
    {
        fact = fact * cont;
        cont++;
    }
    
    return fact;
}

int tablaMult(int tabla, int lim)
{
    int mult = 1, cont = 1;
    
    while(cont <= lim)
    {
        mult = tabla * cont;
        printf("%ix%i = %i\n", tabla, cont, mult);
        cont++;
    }
    
    return mult;
}

void parImpar(int num)
{
    if(num % 2 == 0)
    {
        printf("Es par\n");
    }
    else
    {
        printf("Es impar\n");
    }
}