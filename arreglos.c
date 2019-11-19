/******************************************************************************

Arreglos

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define tam 10

void inicializarArreglo(int[]);
void datosVector();

int main()
{
    int arreglo[tam] = {2,4,5,-1};
    int cantNum, op;
    
    do
    {
        printf("1. Inicialización de arreglos\n2. Datos Vector\n3. Salir\n");
        scanf("%d", &op);
        
        switch(op)
        {
            case 1:
                inicializarArreglo(arreglo);
            break;
            
            case 2:
                printf("Ingrese la cantidad de elementos del vector: ");
                scanf("%d", &cantNum);
                datosVector(cantNum);
            break;
            
            case 3:
                printf("Ha salido");
                exit(0);
            break;
            
            default:
                printf("Ingrese un número del 1 al 3\n");
            break;
        }
    }while(op != 3);
}

void inicializarArreglo(int arreg[tam])
{
    int cont = 0;
    
    while(cont < 4)
    {
        printf("Arreglo[%d] = %d\n", cont, arreg[cont]);
        cont++;
    }
}

void datosVector(int cant)
{
    int cont = 0, arreglo[tam];
    
    while(cont < cant)
    {
        printf("Ingrese el elemento[%d]: ", cont);
        scanf("%d", &arreglo[cont]);
        
        cont++;
    }
    
    printf("\nElementos del Vector\n");
    cont = 0;
    
    while(cont < cant)
    {
        printf("Arreglo[%d] = %d\n", cont, arreglo[cont]);
        cont++;
    }
    
}
