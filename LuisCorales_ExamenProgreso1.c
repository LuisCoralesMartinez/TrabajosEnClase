/******************************************************************************

Examen Practico progreso 1
Luis Corales

*******************************************************************************/
#include <stdio.h>

void main()
{
    int op, edad, trat, num, cont, acum;
    float costo;
    
    do
    {
        printf("Escoja la opción\n1. Costo de internación de un cliente en un spa\n2. Impresion de numeros\n3. Salir del programa\n");
        scanf("%i", &op);
        
        switch(op)
        {
            case 1:
                
                do
                {
                    printf("\nIngrese la edad del cliente. No puede ser menor a 1: ");
                    scanf("%i", &edad);
                }while(edad < 1);
                
                do
                {
                    printf("Ingrese el tipo de tratamiento: ");
                    scanf("%i", &trat);
                    
                    switch(trat)
                    {
                        case 1:
                            costo = 2800;
                        break;
                        
                        case 2:
                            costo = 1950;
                        break;
                        
                        case 3:
                            costo = 2500;
                        break;
                        
                        case 4:
                            costo = 1150;
                        break;
                        
                        default:
                            printf("Opción no valida. Vuelva a ingresar.\n");
                        break;
                    }
                    
                }while(trat < 1 || trat > 4);
                
                if(edad < 25)
                {
                    costo = costo / 1.15;
                }
                else if(edad > 60)
                {
                    costo = costo / 1.25;
                }
                
                printf("El costo por dia para el cliente será: %.2f\n\n", costo);
                
            break;
            
            case 2:
                do
                {
                    printf("\nIngrese un número positivo. No puede ser menor a 1: ");
                    scanf("%i", &num);
                }while(num < 1);
                
                acum = 1;
                cont = 1;
                
                while(acum <= num)
                {
                    while(cont <= acum)
                    {
                        printf("%i ", cont);
                        cont++;
                    }
                    
                    printf("\n");
                    
                    cont = 1;
                    acum++;
                }
                
                cont = 1;
                acum--;
                
                while(acum > 0)
                {
                    while(cont < acum)
                    {
                        printf("%i ", cont);
                        cont++;
                    }
                    
                    printf("\n");
                    
                    cont = 1;
                    acum--;
                    num--;
                }
                
                printf("\n");
            break;
            
            case 3:
            break;
            
            default:
                printf("Opción no valida. Vuelva a ingresar.\n\n");
            break;
        }
    }while(op != 3);
    
    printf("\nSe ha salido del progama");
}
