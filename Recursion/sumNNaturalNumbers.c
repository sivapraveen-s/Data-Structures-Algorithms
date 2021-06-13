/*
*sum of n natural number
*description:
*   if n=5-> 1+2+3+4+5=15
    if n=6-> 1+2+3+4+5+6=21
    if n=8-> 1+2+3+4+5+6+7+8=36
*/
//time and space details syntax time:space->eg: o(n):o(1)
#include<stdio.h>

int sumN(int n)				//itterative sum of n numbers
{
    return n*(n+1)/2;                   //o(1):o(1)
}

int sumNLoop(int n)                                 
{
    int i,sum=0;                          //o(1):-
    for(i=1;i<=n;i++)                   //o(n+1)
    {
        sum=sum+i;                      //o(n)
    }
    return sum;
    //total o(n)
}

int sumNRec(int n)
{
    if(n==0)
    {
        return 0;
    }
        //return 0;
    else
    {
        return sumNRec(n-1)+n;
    }
    //o(n):o(n)
}
int main()
{
    int n,sum_n,n_temp;
    printf("Enter the limit for N natural number: ");
    scanf("%d",&n);
    n_temp=n;
    while(n_temp>0)
    {
        sum_n=sum_n+n_temp;
        n_temp--;
    }
    printf("\nThe sum of n natural numbers using while loop is: %d",sum_n);
    printf("\nThe sum of n natural numbers using sum statement is: %d",sumN(n));
    printf("\nThe sum of n natural numbers using loop  is: %d",sumNLoop(n));
    printf("\nThe sum of n natural numbers using recursion is: %d",sumNRec(n));
}
