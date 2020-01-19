/******************************************************************************
Luis Corales
Promedio estudiantes impresion archivos
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 50

void inicializar(float[][tam]);
void ingresosDatosMatriz(int, int);
void notasEstudiantes(int, int);

FILE *archivo;

void main()
{
    float matriz[][tam] = {{5.4, 3.2}, {7.8, 2.1}, {5.4, 1.2}};
    int op = 0, fil, colum;
    
    setlocale(LC_ALL, "spanish");
    
    archivo = fopen("notasEstudiantes.txt", "a+");
    
    do
    {
        printf("Escoger\n1. Inicializar Vector\n2. Ingresar datos en matriz\n3. Notas estudiantes\n4. Salir\n");
        fputs("Escoger\n1. Inicializar Vector\n2. Ingresar datos en matriz\n3. Notas estudiantes\n4. Salir\n", archivo);
		scanf("%d", &op);
		fprintf(archivo, "%d\n", op);
        
        switch(op)
        {
            case 1:
                inicializar(matriz);
            break;
            
            case 2:
                printf("Ingrese las filas: ");
                fputs("Ingrese las filas: ", archivo);
                scanf("%d", &fil);
                fprintf(archivo, "%d\n", fil);
                
                printf("Ingrese las columnas: ");
                fputs("Ingrese las columnas: ", archivo);
                scanf("%d", &colum);
                fprintf(archivo, "%d\n", colum);
                
                ingresosDatosMatriz(fil, colum);
            break;
            
            case 3:
                printf("Ingrese el numero de notas: ");
                fputs("Ingrese el numero de notas: ", archivo);
                scanf("%d", &fil);
                fprintf(archivo, "%d\n", fil);
                
                printf("Ingrese el numero de estudiantes: ");
                fputs("Ingrese el numero de estudiantes: ", archivo);
                scanf("%d", &colum);
                fprintf(archivo, "%d\n", colum);
                
                notasEstudiantes(fil, colum);
            break;
            
            case 4:
            	printf("Se ha salido");
                fputs("Se ha salido", archivo);
                exit(0);
            break;
            
            default:
                printf("Opcion no valida\n");
                fputs("Opcion no valida\n", archivo);
            break;
        }
        
    }while(op != 4);
    
    getch();
    
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
            fprintf(archivo, "%.2f\t", arreglo[i][j]);
            
            j++;
        }
        
        printf("\n");
        fprintf(archivo, "\n");
        
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
            fprintf(archivo, "Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%f", &arreglo[i][j]);
            fprintf(archivo, "%.2f\n", arreglo[i][j]);
            
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
            fprintf(archivo, "%.2f\t", arreglo[i][j]);
            
            j++;
        }
        
        printf("\n");
        fprintf(archivo, "\n");
        
        i++;
    }
}

void notasEstudiantes(int notas, int estudiante)
{
    int i = 0, j = 0, cont = 0;
    float arreglo[tam][tam], suma = 0, promedio = 0, max = 0, min = 99999;
    
    while(j < estudiante)
    {
        i = 0;
        
        while(i < notas)
        {
            do
            {
                printf("Ingrese las notas del estudiante %d: ", j);
                fprintf(archivo, "Ingrese las notas del estudiante %d: ", j);
                scanf("%f", &arreglo[i][j]);
                fprintf(archivo, "%.2f", &arreglo[i][j]);
                
            }while(arreglo[i][j] < 0);
            
            i++;
        }
        
        j++;
    }
    
    i = 0;
    j = 0;
    
    while(j < estudiante)
    {
        printf("Est %d\t", j);
        fprintf(archivo, "Est %d\t", j);
        
        j++;
    }
    
    printf("\n");
    fprintf(archivo, "\n");
   
    while(i < notas)
    {
        j = 0;
        
        while(j < estudiante)
        {
            printf("%.2f\t", arreglo[i][j]);
            fprintf(archivo, "%.2f\t", arreglo[i][j]);
            
            j++;
        }
        
        printf("\n");
        fprintf(archivo, "\n");
        
        i++;
    }
    
    j = 0;
    
    while(j < estudiante)
    {
        i = 0;
        
        while(i < notas)
        {
            suma += arreglo[i][j];
            i++;
        }
        
        promedio = suma / notas;
        
        printf("El promedio del estudiante %d es = %.1f \n", j, promedio);
        fprintf(archivo, "El promedio del estudiante %d es = %.1f \n", j, promedio);
        
        if(promedio > max)
        {
            max = promedio;
        }
        if(promedio < min)
        {
            min = promedio;
        }
        
        promedio = 0;
        suma = 0;
        j++;
    }
    
    printf("El promedio maximo es %.1f\n", max);
    printf("El promedio minima es %.1f\n\n", min);
    fprintf(archivo, "El promedio maximo es %.1f\n", max);
    fprintf(archivo, "El promedio minima es %.1f\n\n", min);
}
