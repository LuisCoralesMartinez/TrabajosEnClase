/******************************************************************************

Luis Corales
Matrices

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define tam 50

void inicializar(float[][tam]);
void ingresosDatosMatriz(int, int);

void main()
{
    float matriz[][tam] = {{5.4, 3.2}, {7.8, 2.1}, {5.4, 1.2}};
    int op = 0, fil, colum;
    
    do
    {
        printf("Escoger\n1. Inicializar Vector\n2. Ingresar datos en matriz\n3. Salir\n");
        scanf("%d", &op);
        
        switch(op)
        {
            case 1:
                inicializar(matriz);
            break;
            
            case 2:
                printf("Ingrese las filas: ");
                scanf("%d", &fil);
                printf("Ingrese las columnas: ");
                scanf("%d", &colum);
                ingresosDatosMatriz(fil, colum);
            break;
            
            case 3:
                exit(0);
            break;
            
            default:
                printf("Opcion no valida\n");
            break;
        }
        
    }while(op != 3);
    
}

void inicializar(float arreglo[][tam])
{
    int i = 0, j;
    
    while(i < 3)
    {
        j = 0;
        
        while(j < 2)
        {
            printf("%.2f\t", arreglo[i][j]);
            j++;
        }
        
        printf("\n");
        
        i++;
    }
}

void ingresosDatosMatriz(int fila, int columna)
{
    int i = 0, j;
    float arreglo[tam][tam];
    
    while(i < fila)
    {
        j = 0;
        
        while(j < columna)
        {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%f", &arreglo[i][j]);
            j++;
        }
        
        i++;
    }
    
    i = 0;
    
    while(i < fila)
    {
        j = 0;
        
        while(j < columna)
        {
            printf("%.2f\t", arreglo[i][j]);
            j++;
        }
        
        printf("\n");
        
        i++;
    }
}
