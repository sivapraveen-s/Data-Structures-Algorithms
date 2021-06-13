//recursion_returningPhase.c

#include<stdio.h>

int fun1();

int main()
{
    int x=3;
    fun1(x);
    return 0;
}

int fun1(int x)
{
    if(x>0)
    {
        printf("\n %d",x);            //processing while calling
        fun1(x-1);
    }
    return 0;
}
