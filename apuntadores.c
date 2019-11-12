/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float sumaValor(float, float);
float sumaReferencia(float *, float *);

void main()
{
    float num1, num2;
    
    printf("Ingrese num1: ");
    scanf("%f", &num1);
    
    printf("Ingrese num2: ");
    scanf("%f", &num2);
    
    printf("Numero 1: %.2f, numero 2: %.2f, suma por valor %.2f\n", num1, num2, sumaValor(num1, num2));
    
    printf("Numero 1: %.2f, numero 2: %.2f, suma por referencia %.2f", num1, num2, sumaReferencia(&num1, &num2));
}

float sumaValor(float a, float b)
{
    return a + b;
}

float sumaReferencia(float * a, float * b)
{
    *a = 7;
    *b = 10;
    return *a + *b;
}