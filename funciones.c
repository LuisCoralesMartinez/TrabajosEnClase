/******************************************************************************
Ejercicio de funciones
*******************************************************************************/

//Declaración de bibliotecas
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Declaración de funciones
float areaCir(float);
int factorial(int);
int tablaMult(int, int);
void parImpar(int);
void positivosNegativos(int);
void promedio(int, int);

//Funcion principal
void main()
{
    //Declaración de variables gloables
    float rad;
    int num, tabla, lim, op, n;
    int nEstudiantes, nNotas;
    
    //Iteración para escoger la operación deseada
    do
    {
        printf("Escoge un opcion\n1. Factorial\n2. Area de un circulo\n3. Tabla de multiplicar\n4. Par o impar\n5. Contar positivos, negativos y ceros\n6. Determinar el promedio de n estudiantes de n notas\n7. Salir\n");
        scanf("%i", &op);
        
        //Selección de operaciones
        switch(op)
        {
            //Calcular el factorial de un numero
            case 1:
                printf("Factorial de un numero\nIngrese un numero entero: ");
                scanf("%i", &num);
                printf("El factorial es %i\n\n", factorial(num));
                
                getchar();
                getchar();
                system("clear");
            break;
            
            //Calcular el area de un circulo
            case 2:
                printf("Area de un circulo\nIngrese el radio: ");
                scanf("%f", &rad);
                printf("El área del ciruclo es %.2f\n\n", areaCir(rad));
                
                getchar();
                getchar();
                system("clear");
            break;
            
            //Imprimir tabla de multiplicar de cualquier numero
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
            
            //Verificar si es par o impar
            case 4:
                printf("Verificación de pares e impares\nIngrese un numero entero: ");
                scanf("%i", &num);
                parImpar(num);
                
                getchar();
                getchar();
                system("clear");
            break;
            
            //Conteo de numeros pos, neg y ceros
            case 5:
                printf("Contar numeros positivos, negativos y ceros");
                do
                {
                    printf("Cuantos numeros ingresará? (Al menos un numero): ");
                    scanf("%i", &n);
                }while(n < 1);
                
                positivosNegativos(n);
                
                getchar();
                getchar();
                system("clear");
            break;
            
            //Calcular el promedio de n estudiantes
            case 6:
                printf("Determinar el promedio de n estudiantes de n notas\nIngrese el numero de estudiantes: ");
                scanf("%i", &nEstudiantes);
                
                printf("Ingrese el numero de notas: ");
                scanf("%i", &nNotas);
                
                promedio(nEstudiantes, nNotas);
                
                getchar();
                getchar();
                system("clear");
            break;
            
            //Salir del programa
            case 7:
                printf("Ha salido del programa");
                exit(0);
            break;
            
            //Opcion default
            default:
                printf("Opcion no valida\n");
            break;
        }
    }while(op != 7);    //Repetir la operacion si la opcion escogida no es 7
}

//Calcular el factorial de un numero
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

//Calcular el area de un circulo
float areaCir(float rad)
{
    float area = 0, pi = 3.1416;

    area = pow(rad, 2) * pi;
    
    return area;
}

//Imprimir tabla de multiplicar de cualquier numero
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

//Verificar si es par o impar
void parImpar(int num)
{
    if(num % 2 == 0 && num != 0)
    {
        printf("Es par\n");
    }
    else if(num != 0)
    {
        printf("Es impar\n");
    }
}

//Conteo de numeros pos, neg y ceros
void positivosNegativos(int n)
{
    
    int pCont = 0, nCont = 0, ceroCont = 0, numero, cont = 1;
    
    do
    {
        printf("Ingrese un numero entero: ");
        scanf("%i", &numero);
        if(numero < 0)
        {
            nCont++;
        }
        else if(numero > 0)
        {
            pCont++;
        }
        else
        {
            ceroCont++;
        }
        
        cont++;
        
    }while(cont <= n);
    
    printf("Hay %i numeros positivos\n", pCont);
    printf("Hay %i numeros negativos\n", nCont);
    printf("Hay %i ceros\n", ceroCont);
}

//Calcular el promedio de n estudiantes
void promedio(int nEstudiantes, int nNotas)
{
    float promedio, nota, suma = 0;
    int contEst, contNota;
    
    for(contEst = 1; contEst <= nEstudiantes; contEst++)
    {
        for(contNota = 1; contNota <= nNotas; contNota++)
        {
            printf("Ingrese la nota: ");
            scanf("%f", &nota);
            
            suma += nota;
        }
        
        promedio = suma / nNotas;
        
        printf("El promedio del alumno %i es %.2f\n", contEst, promedio);
        
        suma = 0;
        promedio = 0;
    }
}
