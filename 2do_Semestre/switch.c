/******************************************************************************

Realizar un programa que contenga el menu con las siguientes opciones

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main()
{
    int op;
    float a, b, c, x1 = 0, x2 = 0, base, altura, area = 0;
    
    printf("Menu principal\nEscoja\n1. Ecuación cuadrática\n2. Área del triángulo\n");
    scanf("%i", &op);
    
    switch(op)
    {
        case 1:
            printf("Ingrese el coeficiente a: ");
            scanf("%f", &a);
            printf("Ingrese el coeficiente b: ");
            scanf("%f", &b);
            printf("Ingrese el coeficiente c: ");
            scanf("%f", &c);
            
            x1 = (-b + (sqrt(pow(b,2) - 4 * a * c))) / (2 * a);
            x2 = (-b - (sqrt(pow(b,2) - 4 * a * c))) / (2 * a);
            
            printf("X1 = %f\n", x1);
            printf("X2 = %f\n", x2);
        break;

        case 2:
            printf("Ingrese la base: ");
            scanf("%f", &base);
            printf("Ingrese la altura: ");
            scanf("%f", &altura);

            area = (base * altura) / 2;

            printf("Area = %.2f", area);
        break;
        
        default:
            printf("Opción no válida");
        break;
    }
}
