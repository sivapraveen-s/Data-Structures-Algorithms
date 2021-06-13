//global_recursion.c

#include<stdio.h>
int x;
int fun(int n)
{
    
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main()
{
    int result1,result2;
    int a=5;
    result1=fun(a);
    printf("Result 1: %d",result1);             //the values in this fun subroutine x is remain last long foreever so if we need to use next time we need to continue from the last
    
    result2=fun(a);
    printf("\nResult 2: %d",result2);
}



//output:

Result 1: 25
Result 2: 50
