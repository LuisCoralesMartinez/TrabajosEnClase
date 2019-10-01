/******************************************************************************

Realizar un programa en C que realice una factura

*******************************************************************************/
#include <stdio.h>

void main ()
{
    char nombre[10], desP1[10], desP2[10];
    float precioP1, precioP2, pVta1, pVta2, cant1, cant2, iva, subtotal = 0, total = 0;
    int cedula;
    printf("Ingrese el nombre del cliente: ");
    scanf("%s", &nombre);
    printf("Ingrese la cedula: ");
    scanf("%i", &cedula);
    
    printf("Datos del producto 1 \n");
    printf("Descripción del producto: ");
    scanf("%s", &desP1);
    printf("Precio del producto: ");
    scanf("%f", &precioP1);
    printf("Cantidad del producto: ");
    scanf("%f", &cant1);
    
    printf("Datos del producto 2 \n");
    printf("Descripción del producto: ");
    scanf("%s", &desP2);
    printf("Precio del producto: ");
    scanf("%f", &precioP2);
    printf("Cantidad del producto: ");
    scanf("%f", &cant2);
    
    pVta1 = cant1 * precioP1;
    pVta2 = cant2 * precioP2;
    subtotal = pVta2 + pVta1;
    iva = subtotal * 0.12;
    total = iva + subtotal;
    
    printf("\n------------------------\nEmpresa XYZ");
    printf("\nCliente: ");
    printf("%s", nombre);
    printf("\nCedula: ");
    printf("%i", cedula);
    printf("\nDescripción\tCantidad\tPrecio\t\tP. Venta\n");
    printf("%s", desP1);
    printf("\t\t%.2f", cant1);
    printf("\t\t%.2f", precioP1);
    printf("\t\t%.2f", pVta1);
    
    printf("\n");
    
    printf("%s", desP2);
    printf("\t\t%.2f", cant2);
    printf("\t\t%.2f", precioP2);
    printf("\t\t%.2f", pVta2);
    
    printf("\n\n");
    
    printf("\t\t\t\tSubtotal:\t");
    printf("%.2f", subtotal);
    printf("\n\t\t\t\tIva:\t\t");
    printf("%.2f", iva);
    printf("\n\t\t\t\tTotal:\t\t");
    printf("%.2f", total);
}
