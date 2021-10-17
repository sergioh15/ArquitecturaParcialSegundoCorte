#include<stdio.h>


int main()
{

// Declaración inicial de las variables
float radio=0.0,altura=0.0;
int opcion;
const float pi=3.1415658;

printf("\n======================================="); 
printf("\nQue quiere calcular?");
printf("\n1. para area de un circulo");
printf("\n2. para circunferencia de un circulo");
printf("\n3. para volumen de un cilindro");
printf("\n=======================================\n");
printf("\nIngrese su opcion aca:");
scanf("%d",&opcion);

switch (opcion)
{
case 1:
 printf("\nIngrese el radio de un circulo:");
 scanf("%f",&radio);
 printf("\n=======================================");
    printf("\nArea del circulo = %f",radio*radio*pi);
    printf("\n=======================================");
   break;
case 2:
 printf("\nIngrese el radio de un circulo:");
 scanf("%f",&radio);
 printf("=======================================");
    printf("\nCircunferencia del circulo= %f",2*radio*pi);
 printf("\n=======================================");
    break;
case 3:
 printf("\nIngrese el radio del cilindro:");
 scanf("%f",&radio);
    printf("\nIngrese la altura del cilindro:");
    scanf("%f",&altura);
    printf("\n=======================================");
    printf("\nVolumen del cilindro = %f",radio*radio*pi*altura);
    printf("\n=======================================");
    break;
default:
 printf("\n=======================================");
    printf("\nOpcion incorrecta, intente de nuevo!!!\n");
    printf("=======================================");
   break;
}

return 0;
}