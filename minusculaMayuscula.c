/*
Octubre 20 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C que permita pasar las letras minusculas a mayusculas
por el usuario
*/
#include<stdio.h>
#include<string.h>

int main()
{
     
    while(1)
    {
//Declaracion del array (Cadena de caracteres)
 char str[20];
    int i;
//Se pide que se ingrese la cadena 
    printf("\n\nIngrese la cadena de caracteres ");
    scanf("%s",str);
//Ciclo for para convertir en mayusculas
    for (i=0;i<=strlen(str);i++)
  {
        if (str[i]>=65&&str[i]<=90)
        {
         str[i] = str[i] + 32;
  }    
//Ciclo for para convertir en minusculas
        else if (str[i] >= 97 && str[i] <= 122)
        {
         str[i] = str[i] - 32;
  }    
    }
    
    printf("\n\nCovertido de minusculas a mayusculas:  %s\n\n",str);
 }

    return 0;
}