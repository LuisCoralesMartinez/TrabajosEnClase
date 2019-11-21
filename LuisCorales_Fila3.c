/*

Fila 3. LUIS CORALES

*/

#include<stdio.h>
#include<stdlib.h>
#define tam 10

void inicializaArreglo(int[]);
void datosArreglo(int);
void numBuscar(int);
void posiNeg(int);

void main()
{
	int arreglo[tam] = {3,-1,5,9}, cantNum, op;
	
	while(op != 5)
	{
		printf("1. Inicializacion Arreglo\n2. Datos Arreglo\n3. Numero Buscar\n4. Postivos y negativos en un arreglo\n5. Salir\n");
		printf("Ingrese la opcion: ");
		scanf("%d",&op);
		
		switch(op)
		{
			case 1:
				inicializaArreglo(arreglo);
				getchar();
				getchar();
				system("clear");
			break;
			
			case 2:
				printf("Ingrese la cantidad de elementos del vector: ");
				scanf("%d",&cantNum);
				datosArreglo(cantNum);
				getchar();
				getchar();
				system("clear");
			break;
			
			case 3:
				printf("Ingrese la cantidad de elementos del vector: ");
				scanf("%d",&cantNum);
				numBuscar(cantNum);
				getchar();
				getchar();
				system("clear");
			break;
			
			case 4:
			    printf("Ingrese la cantidad de elementos del arreglo: ");
			    scanf("%d",&cantNum);
			    posiNeg(cantNum);
			    getchar();
				getchar();
				system("clear");
			break;
			
			default:
				printf("\nOpción Invalida\n");
			break;
		}
	}
}

void inicializaArreglo(int arreg[tam])
{
	int cont=0;
	while(cont<4)
	{
		printf("Elemento[%d] = %d\n",cont,arreg[cont]);
		cont++;
	}
}

void datosArreglo(int cant)
{
	int cont=0,arreglo[tam];
	
	while(cont<cant)
	{
		printf("Ingrese el elemento[%d]: ",cont);
		scanf("%d",&arreglo[cont]);
		cont++;
	}
	
	printf("Elementos del vector\n");
	cont=0;
	
	while(cont<cant)
	{
		printf("Elemento[%d] = %d\n",cont,arreglo[cont]);
		cont++;
	}
}

void numBuscar(int cant)
{
	int cont=0,arreglo[tam],buscar,cuenta=0;
	
	while(cont<cant)
	{
		printf("Ingrese el elemento[%d]: ",cont);
		scanf("%d",&arreglo[cont]);
		cont++;
	}
	
	printf("Ingrese el elemento a buscar\n");
	scanf("%d",&buscar);
	cont=0;
	
	while(cont<cant)
	{
		if(buscar == arreglo[cont])
			cuenta++;
		cont++;
	}
	
	printf("El numero %d se repite %d",buscar,cuenta);
}

void posiNeg(int cant)
{
    int cont = 0, array[cant], positivos = 0, negativos = 0, ceros = 0;
	
	while(cont<cant)
	{
		printf("Ingrese el elemento[%d]: ",cont);
		scanf("%d",&array[cont]);

		cont++;
	}

	for(cont = 0; cont < cant; cont++)
	{
		if(array[cont] < 0)
		{
		    negativos++;
		}
		else if(array[cont] > 0)
		{
		    positivos++;
		}
		else
		{
		    ceros++;
		}
	}
	
	printf("Hay %d números positivos\n", positivos);
	printf("Hay %d números negativos\n", negativos);
	printf("Hay %d ceros", ceros);
}