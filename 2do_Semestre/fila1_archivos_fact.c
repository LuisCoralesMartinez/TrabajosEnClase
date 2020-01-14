/*

Fila 1 Luis Corales
Realizar un programa usando funciones que permite generar la serie 
de n numeros pares y la tablar de multiplicar de cualquier numero

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void ingresoDatosPares(int);
void seriePares(int);
void ingresoDatosTabla(int, int);
void tablaMultiplicar(int, int);
void ingresoDatosFactorial(int);
void factorial(int);

//Declaracion global
FILE *archivo;

void main()
{
	setlocale(LC_ALL, "spanish");
	
	int cantNum, tabla, limite, fact;
	
	archivo = fopen("datos.txt", "w");
	
	ingresoDatosPares(cantNum);
	
	ingresoDatosTabla(tabla, limite);
	
	ingresoDatosFactorial(fact);
	
	getch();
}

void ingresoDatosPares(int cantNum)
{
	printf("Ingrese la cantidad de números: ");
	fputs("Ingrese la cantidad de números: ", archivo);
	scanf("%d", &cantNum);
	fprintf(archivo, "%d\n", cantNum);
	
	seriePares(cantNum);
}

void seriePares(int cantNum)
{
	int cont = 1, par = 0;
	
	while(cont <= cantNum)
	{
		par = par + 2;
		
		printf("%d\n", par); 
		fprintf(archivo, "%d\n", par);
		
		cont++;
	}
}

void ingresoDatosTabla(int tabla, int limite)
{
	printf("\nIngrese la tabla de multiplicar: ");
	fputs("\nIngrese la tabla de multiplicar: ", archivo);
	scanf("%d", &tabla);
	fprintf(archivo, "%d\n", tabla);
	
	printf("Ingrese el límite: ");
	fputs("Ingrese el límite: ", archivo);
	scanf("%d", &limite);
	fprintf(archivo, "%d\n", limite);
	
	tablaMultiplicar(tabla, limite);
	
}

void tablaMultiplicar(int tabla, int limite)
{
	int cont = 1, mult = 1;
	
	while(cont <= limite)
	{
		mult = cont * tabla;
		
		printf("%d x %d = %d\n", tabla, cont, mult);
		fprintf(archivo, "%d x %d = %d\n", tabla, cont, mult);
		
		cont++;
	}
}

void ingresoDatosFactorial(int fact)
{
	printf("\nIngrese un número para determinar su factorial: ");
	fputs("\nIngrese un número para determinar su factorial: ", archivo);
	scanf("%d", &fact);
	fprintf(archivo, "%d\n", fact);
	
	factorial(fact);
}

void factorial(int fact)
{
	int cont = 1, result = 1;
	
	while(cont <= fact)
	{
		result = result * cont;
		printf("%d\n", result);
		fprintf(archivo, "%d\n", result);
		
		cont++;
	}
}
