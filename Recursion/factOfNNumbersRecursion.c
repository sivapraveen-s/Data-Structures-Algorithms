/*
*factOfNNumbers.c
*   N!=1*2*3*.....*n;
*   5!=1*2*3*4*5->120
*   0!=1, 1!=120->both the 0 and 1 factorial is 1 only
*
*/
#include<stdio.h>

int factN(int n)    //itterative factorial
{
    int fact=1,i;               
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int factNRec(int n)
{
    if(n==0)
    {
        return 1;               //return 1 otherwise mult values leads to zero(0)
    }
    else
    {
        return factNRec(n-1)*n;
    }
}

int main()
{
    int a;
    printf("Enter the n factorial number: ");
    scanf("%d",&a);
    printf("\nThe factorial of given number using itterative function: %d",factN(a));
    printf("\nThe factorial of given number using recursive function: %d",factNRec(a));
    return 0;
}
