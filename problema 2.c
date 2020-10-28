/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main()
{
   unsigned int a;
   unsigned int b;
   
   int division;
   int multiplicacion;
   
   a=9;
   b=4;
   division= a>>b;
   multiplicacion = a<<b;
   printf( "%d ", division);
   printf( "%d ", multiplicacion);
   
   return 0;
}