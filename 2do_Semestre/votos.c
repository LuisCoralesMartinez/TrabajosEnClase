/******************************************************************************

Los organizadores de un acto electoral solicitaron realizar un programa 
para manejar el conteo de votos. En la elección hay cinco candidatos, 
los cuales se representan con los valores comprendidos entre 1 y 5. El programa
debe obtener el número de votos de cada candidato y el porcentaje que obtuvo 
respecto al total de los votantes. Se ingresa los votos de manera desordenada, 
el final de ingreso de los votos se representa por un cero.

Ejemplo
INGRESO DE VOTOS:
2 5 5 4 3 5 1 2 4 3 1 2 4 5 0
2 representa un voto para el candidato2
5 representa un voto para el candidato5
4 representa un voto para el candidato4


*******************************************************************************/
#include <stdio.h>

int main()
{
    int voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, voto5 = 0, voto, total = 0;
    float p1, p2, p3, p4, p5;
    
    printf("Ingresee los votos: ");
    scanf("%i", &voto);
    if(voto == 1){
        voto1++;
    }
    else if(voto == 2){
        voto2++;
    }
    else if(voto == 2){
        voto3++;
    }
    else if(voto == 4){
        voto4++;
    }
    else if(voto == 5){
        voto5++;
    }
    
    total = voto1 + voto2 + voto3 + voto4 + voto5;
    p1 = voto1 / total * 100;
    p2 = voto2 / total * 100;
    p3 = voto3 / total * 100;
    p4 = voto4 / total * 100;
    p5 = voto5 / total * 100;
    
    printf("El candidato 1 tiene %i votos con un %.2f del total\n", voto1, p1);
    printf("El candidato 2 tiene %i votos con un %.2f del total\n", voto2, p2);
    printf("El candidato 3 tiene %i votos con un %.2f del total\n", voto3, p3);
    printf("El candidato 4 tiene %i votos con un %.2f del total\n", voto4, p4);
    printf("El candidato 5 tiene %i votos con un %.2f del total", voto5, p5);
}
