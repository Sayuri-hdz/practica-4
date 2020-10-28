/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int unique_element(int * in, int sz){
    int unique[(sz-1)/3 + 1];
    int ans = unique[0];
    int c = 0;
    for (int i = 0; i < sz; ++i){
        int current = in[i];
        
        int flag = 0;
        for (int j = 0; j < (sz-1)/3+1; ++j){
           if (unique[j] == current){
               flag = 1;
               break;
           } 
        }
        
        unique[c] = current;
        ++c;
            
        if (!flag){
            ans = current;
        } 
    }
    return ans;
}

int main()
{
    int in[] = {10, 1, 10, 3, 10, 1, 1, 2, 3, 3};
    int ou = 2;
    
    int ans = unique_element(in, 10);
    printf("Expected: %d, Returned: %d \n", ou, ans);
    
    return 0;
}
