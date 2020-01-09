/******************************************************************************
	Luis Corales
	
	Realizar programa en C que tenga dos funciones:
	Inicializar dos elementos de un arreglo
	Ingresar los elementos del arreglo por teclado usando punteros
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void inicializarArreglo(int [], int *);
void ingresoElementos(int [], int tam, int *);

void main() 
{
	int arreglo[] = {2,3,1,-4}, *p, tam;
	
	inicializarArreglo(arreglo, p);
	
	printf("Ingrese el tamaño: ");
	scanf("%d", &tam);
	
	ingresoElementos(arreglo, tam, p);
	
	getch();
}

void inicializarArreglo(int arreglo[], int *p)
{
	int i = 0;
	p = arreglo;
	
	while(i < 4)
	{
		printf("%d\n", *p++);
		i++;
	}
}

void ingresoElementos(int arreglo[], int tam, int *p)
{
	int i = 0;
	
	while(i < tam)
	{
		printf("Ingrese el elemento %d: ", i);
		scanf("%d", &arreglo[i]);
		
		i++;
	}
	
	i = 0;
	p = arreglo;
	
	while(i < tam)
	{
		printf("%d", *p++);
		printf("\n");
		
		i++;
	}
	
}
