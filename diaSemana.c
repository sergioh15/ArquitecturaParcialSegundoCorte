 /*
Octubre 16 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C que imprime un dia de la semana usando switch case
*/
 #include<stdio.h>

int main()
{
 // Declaración inicial de las variables
 int opcion;

 // se pide introducir el número del día de la semana
 printf("**************************************************\n");
 printf("********************BIENVENIDO******************** \n");
 printf("Lunes será el dia numero 1 de la semana\n");
 printf("Ingrese un numero (del 1 al 7):");
 scanf("%d",&opcion);
 
 /* Se realizan los calculos
    se hace uso de la estructura switch que se encarga de verificar el número de la semana que 
    desea consultar el usuario, empezando desde el día lunes #1, martes #2 y asi sucesivamente
*/
 switch(opcion)
 {
  case  1:
   printf("Hoy es lunes\n");
   printf("**************************************************\n");
   break;
  case  2:
   printf("Hoy es martes\n");
   printf("**************************************************\n");
   break;
  case  3:
   printf("Hoy es miercoles\n");
   printf("**************************************************\n");
   break;
  case  4:
   printf("Hoy es jueves\n");
   printf("**************************************************\n");
   break;
  case  5:
   printf("Hoy es viernes\n");
   printf("**************************************************\n");
   break;
  case  6:
   printf("Hoy es sabado\n");
   printf("**************************************************\n");
   break;
  case  7:
   printf("Hoy es domingo\n");
   printf("**************************************************\n");
   break;
  default:
  printf("Opcion incorrecta, intente de nuevo!!!\n");
  printf("**************************************************\n");
 }
 return 0;
}
