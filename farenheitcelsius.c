/******************************************************************************

Un programa en C que convierta de Farenheit a Celsius y viceversa

*******************************************************************************/
#include <stdio.h>                  //Inclusion de bibliotecas

int main()                          //Funcion main principal
{
    float conver, grados = 0;       //Declaracion de variables reales
    int choice;                     //Declaracion de variables enteras
    

    printf("Ingrese '1' para °F a °C \nIngrese '2' para °C a °F\n");        //Lectura de tipo de conversion
    scanf("%i", &choice);                                                   //Leer dato ingresado
    
    if(choice == 1){                            //Eleccion de °F A °C
        printf("Ingrese los grados °F: ");      //Imprimir mensaje
        scanf("%f", &grados);                   //Leer grados ingresados
        conver = (grados -32) * 5/9;            //Operacion de conversion
        printf("Son %.2f °C", conver);          //Imprimir grados ya convertidos
    }
    else if(choice == 2){                       //Eleccion de °C A °F
        printf("Ingrese los grados °C: ");      //Imprimir mensaje
        scanf("%f", &grados);                   //Leer grados ingresados
        conver = (grados * 9/5) + 32;           //Operacion de conversion
        printf("Son %.2f °F", conver);          //Imprimir grados ya convertidos
    }

}