 /*
Octubre 20 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C que permita encontrar la frecuencia de cada caracter de una cadena de caracteres
*/
#include <string.h>
 
int main()
{
    //declaracion inicial de las variables
    char s[1000];  
    int  i,j,k,count=0,n;
 
  // se pide que ingrese la cadena de caracteres
    printf("Ingrese una cadena de caracteres: ");
    gets(s);
     
     //Inicializar el valor j en la variable n. j indica la longitud de la cadena.
    for(j=0;s[j];j++);
	 n=j; 
    
	printf(" Frecuancia de cada caracter:\n");
 
 //El bucle for externo itera a través de la cadena con
 // la estructura for, para cada iteración selecciona un elemento s[i].
 
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(s[i])
    	{
		//El bucle for interno compara el s [i] con los elementos restantes de la cadena 
        //usando el bucle for con la estructura for. Si coincide, aumente el valor de conteo.
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",s[i],count);
 
	       
	   
       }
	   
	   
 	} 
 	 
     
    return 0;
}