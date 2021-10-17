 /*
Octubre 16 de 2021
Aaron Sarmiento
Escribir un programa en C que realice las operaciones basicas de una calculadora
*/
#include<stdio.h>
int main()
{
// Declaración inicial de las variables
char opcion;
int numero1, numero2, resultado = 0;

while(1)
{
// se pide introducir los valores y la operación a realizar
printf("**************************************************\n");
printf("********************BIENVENIDO******************** \n");
printf("Ingrese el primer valor: ");
scanf("%d",&numero1);

printf("Ingrese la operacion a realizar: (+, -, *, /): " );
scanf(" %c",&opcion);

printf("Ingrese el segundo valor : ");
scanf("%d",&numero2);

/* Se realizan los calculos
    se hace uso de la estructura switch que se encarga de verificar la operación a realizar
    y realiza los calculos que se encuentren en la operacion elegida por el usuario
*/
switch(opcion)
{
    //operaciones para la suma
case '+':
   resultado = numero1 + numero2;
   printf("%d + %d = %d \n",numero1, numero2, resultado);
   printf("**************************************************\n");
 break;
    //operaciones para la resta
case '-':
   resultado = numero1 - numero2;
   printf("%d - %d = %d \n",numero1, numero2, resultado);
   printf("**************************************************\n");
 break;
    //operaciones para la multiplicación
case '*':
   resultado = numero1 * numero2;
   printf("%d * %d = %d \n",numero1, numero2, resultado);
   printf("**************************************************\n");
 break;
    //operaciones para la división
case '/':
   resultado = numero1 / numero2;
   printf("%d / %d = %d \n",numero1, numero2, resultado);
   printf("**************************************************\n");
 break;
default:
   printf("Ingrese una operacion valida!!!\n");
   printf("**************************************************\n");
}
return 0;
}
}