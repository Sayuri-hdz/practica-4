/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include <stdio.h>
#include <math.h>
   int contador;
   int numero;
   int real;
   int contador;

void Decimal_to_Binary(contador)
{
    int j;
    for(int i =6 ; i >= 0; i--)
    {
        j = contador >> i;
        
        if(j & 1)
            printf("1");
        else
            printf("0");
    }
    printf("__");
}
int main() 
{
   int contador;
   int n;
   int numero;


   contador = 0; /* Inicialización del contador */
   n= 5;
   numero = pow(2,n) - 1;
   while ( contador <= numero )        /* Condición */
   {
      Decimal_to_Binary(contador); 
      contador++;    /* Incremento del contador */
   }

    return 0;
}