//nestedRecursion.c
#include<stdio.h>

int fun(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else
    {
        return fun(fun(n+11));          //nested recursion format
    }
}

int main()
{
    int a=95,result=0;
    result=fun(a);
    printf("\nResult: %d",result);
}
