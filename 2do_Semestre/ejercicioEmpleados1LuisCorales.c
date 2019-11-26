/******************************************************************************

Programa del ejercicio 1

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cedula, edad, puntos, op, horas, tiempo, sexo;
    float sueldo;
    
    printf("Ingrese su cedula: ");
    scanf("%i", &cedula);
    
    printf("Ingrese su edad: ");
    scanf("%i", &edad);
    
    printf("Escoja\n1. Trabaja en la empresa\n2. Aplica para ser contratado\n");
    scanf("%i", &op);
    
    if(op == 1){
        printf("Escoja su sexo\n1. Soy hombre\n2. Soy mujer\n");
        scanf("%i", &sexo);
        printf("Ingresar sueldo: ");
        scanf("%f", &sueldo);
        printf("Cuantos años tiene en la empresa: ");
        scanf("%i", &tiempo);
        printf("Cuantas horas trabajó: ");
        scanf("%i", &horas);
        
        if(horas > 40){
            printf("+ 50.00$ a su sueldo por tener más de 40 horas trabajadas\n");
            sueldo = sueldo + 50;
        }
        
        if(sexo == 2 || edad > 25){
            if(tiempo > 30){
            printf("+ 800.00$ a su sueldo por ser mujer o tener más de 25 años de edad y por trabajar más de 30 años en la empresa\n");
            sueldo = sueldo + 800;
            }
        }
        else
        {
            printf("+ 100.00$ a su sueldo\n");
            sueldo = sueldo + 100;
        }
        
        printf("Su sueldo aumentado es %.2f$", sueldo);
    }
    else
    {
        if(edad > 18){
            printf("Ingrese puntaje de prueba: ");
            scanf("%i", &puntos);
            if(puntos > 85){
                printf("Será contratado");
            }
        }
        else 
        {
            printf("No será contratado");
        }
    }
}