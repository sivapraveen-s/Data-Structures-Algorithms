//powerRecursion.c

#include<stdio.h>

int power(int m,int n)
{
    if(n==0)
    {
        return 1;                   //if its add,sub we can return 0 but here pro so we need to return 1 anything produ than its will be same number
    }
    else
    {
        return power(m,n-1)*m;
    }
}
/*
* The normal the above power function return the power of the certain value but 
* the time taken and space complexity is order of n  depends upon the number of
* function called so that the code activation record will be allocated in the stack
* so that stack memory size will be increased to reduce the size of the code activation record
* in the stack we need to minimize using loops because recursion always takes the more time 
* and spacec complexity(those time and space always depends on the number of function called),
* And another way is for divided the function calls, for eg here the power called fun refer here.
*/

int power1(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return power1(m*m,n/2);
    }
    else
    {
        return m*power1(m*m,(n-1)/2);
    }
}

int main()
{
    int m,n;
    printf("Enter the values of m(value to be powered) and n(number of times): ");
    scanf("%d %d",&m,&n);
    int power_result=power(m,n);
    printf("\nThe %d(m) Power of %d(n) is: %d",m,n,power_result);
    int power1_result=power1(m,n);
    printf("\nThe %d(m) power of %d(n) is: %d",m,n,power1_result);
    return 0;
}
