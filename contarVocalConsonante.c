 /*
Octubre 20 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C que permita contar el numero de vocales y consonantes que hay en una cadena de caracteres
*/
 #include<stdio.h>

int main()
{

    //declaracion inicial de las variables
    char line[1000];
    int i, vocal, consonante;
 
    vocal = consonante = 0;
    //se pide que ingrese la cadena de caracteres
    printf("\n\nIngrese una cadena de caracteres \n\n");
 
    gets(line);
    //se evalua si los caracteres coiciden con las vocales o con las consonantes, en ese caso el contador va sumando
    for(i=0;line[i]!='\0';++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
            ++vocal;
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
            ++consonante;
        
    }
    printf("\n\nSalida de datos\n\n");

    printf("\n\nEl numero total de vocales es: %d",vocal);
    printf("\nEl numero total de consonates es: %d\n",consonante);
    
    return 0;
}

