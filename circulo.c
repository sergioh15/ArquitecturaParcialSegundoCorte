/*
Octubre 14 de 2021
Aaron Sarmiento
Programa en C para encontrar el area y la circunferencia de un circulo
*/

#include<stdio.h>

int main(){
    //declaracion inicial de las variables
    float radio, area, circunferencia;
    float pi = 3.14159;

    //se pide introducir el valor del radio del circulo
    printf("**************************************************\n");
    printf("********************BIENVENIDO******************** \n");
    printf("Por favor ingrese el valor del radio del circulo \n");
    scanf("%f", &radio);

    //se realizan los calculos
    area = pi*radio*radio ;
    circunferencia = 2*pi*radio;

    //salida de datos
    printf("El area del circulo es: %f \n", area);
    printf("La circunferencia del circulo es: %f \n", circunferencia); 
    printf("**************************************************\n"); 

}