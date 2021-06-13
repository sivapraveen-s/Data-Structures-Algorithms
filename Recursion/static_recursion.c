//static_recursion.c

#include<stdio.h>
int fun(int n)
{
    static int x;
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
    printf("Result 1: %d",result1);				//here the first time calls the value of x above static int x is 5 at the end of fun call,so next time we called means x remains  5 so it starts increment from 5 only

    result2=fun(a);
    printf("\nResult 2: %d",result2);
}





//outut:
Result 1: 25
Result 2: 50
