/******************************************************************************

Fila 2: Luis Corales

Realizar un programa en C que al recibir como datos un grupo de números naturales positivos,
calcule el cuadrado de estos números. Imprima el cuadrado del número y al final la suma de
los cuadrados.
Datos: NUM1, NUM2, NUM3,..., 0
Donde: NUMi es una variable de tipo entero que representa al número positivo i.
El fin de los datos está dado por 0

*******************************************************************************/

//Inclusión de librerias
#include <stdio.h>
#include <math.h>

//Funcion principal
void main()
{
    //Declaración de variables
    int numero, suma = 0;
    
    //Pedir al usuario que ingrese un numero positivo
    printf("Ingrese un numero positivo (0 detendrá el proceso): ");
    scanf("%i", &numero);
    
    //Iterador que permita terminar el proceso si el numero es 0
    while(numero != 0)
    {
        
        //Iterador que permita ingresar UNICAMENTE numeros positivos
        while(numero < 0)
        {
            printf("Ingrese un número válido: ");
            scanf("%i", &numero);
        }
        
        //Calculo para elevar al cuadrado el numero y luego sumarlo
        numero = pow(numero,2);
        suma = numero + suma;
        
        //Pedir al usuario nuevamente que ingrese un numero positivo
        printf("Ingrese un numero positivo (0 detendrá el proceso): ");
        scanf("%i", &numero);
    }
    
    //Imprimir el resultado de la suma de los cuadrados
    printf("La suma de los cuadrados de los números es: %i", suma);

}
