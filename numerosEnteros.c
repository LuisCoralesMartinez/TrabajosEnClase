/******************************************************************************

Realizar un programa que permita generar n numeros enteros

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont = 1, n, numero, suma = 0, op;
    
    scanf("%i", &op);
    
    switch(op)
    {
        case 1:
            printf("Cuantos numeros ingresará: ");
            scanf("%i", &n);
            
            while(cont <= n){
                printf("Ingrese un numero: ");
                scanf("%i", &numero);
                suma = suma + numero;
                
                cont++;
            }
            printf("El resultado es %i\n", suma);
        break;
        
        case 2:
            printf("Cuantos numeros ingresará: ");
            scanf("%i", &n);
            while(cont <= n){
                suma = suma + cont;
                printf("%i\n", cont);
                cont++;
            }
            printf("La suma de %i numeros es %i\n", n, suma);
        break;
        
        case 3:
            printf("Cuantos numeros ingresará: ");
            scanf("%i", &n);
            do
            {
                printf("%i\n", cont);
                cont++;
            }while(cont <= n);
        break;    
        
        case 4:
            printf("Cuantos numeros ingresará: ");
            scanf("%i", &n);
            for(cont = 1; cont <= n; i++){
               printf("%i\n", cont); 
            }
        break;
        
        default:
            printf("Opción no válida\n"); 
        break;
    }
}
