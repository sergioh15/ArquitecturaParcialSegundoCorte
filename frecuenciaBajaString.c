 /*
Octubre 20 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C que permita encontrar el caracter con la frecuencia mas alta en un String
*/
#include <string.h>
 
int main()
{
    //declaracion inicial de las variables
    char s[1000];  
    int  a[1000],i,j,k,contador=0,n;

 // se pide que ingrese la cadena de caracteres
    printf("Ingrese la cadena de caracteres: ");
    gets(s);
      /*El bucle for itera la cadena hasta que el último carácter de la cadena se convierte en nulo.
     Luego, se inicializa el valor j a n, que es la longitud de la cadena. 
     */
    for(j=0;s[j];j++);
	k=n=j; 
    /*El bucle for interno compara los caracteres restantes de la cadena con s [i]. 
    Si coincide, aumente el valor del contador en 1.*/
    for(i=0;i<n;i++)  
    {
    	a[i]=n;
    	contador=1;
    	if(s[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 contador++;
                 s[j]='\0';
	     	}
	      }  
          //Almacene el valor de contador en [i].
        //Si el valor del contador < k, inicialice k = contador.
	      a[i]=contador;
	    if(contador<=k)
	     k=contador;
	   
       }
	   
	   
 	}
 	printf("Caracteres con menor frecuencia: ");
     //Si el valor de conteo a [j] es igual al valor de conteo mínimo k, 
     //entonces se imprime el elemento s[j] y el valor k.
 	for(j=0;j<n;j++)  
	    {
	    	
	        if(a[j]==k)
    	    {
	             printf(" '%c',",s[j]);
	     	}
	   }  
     
	printf("\b = %d veces \n ",k);
 
 	 
     
    return 0;
}