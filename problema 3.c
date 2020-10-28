/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,b,suma=0;
    printf("\n      Introduce un numero para elevarlo al cuadrado \n\n Numero: ");
    scanf("%d", &x);
    b=x;
    for(i=0;i<(b-1);i++){
        y=b;
        while(y!=0){
            int carry = x & y;
            x = x ^ y;
            y = carry <<1;
        }
    }
    printf("\n   Respuesta: %d\n",x);
}
