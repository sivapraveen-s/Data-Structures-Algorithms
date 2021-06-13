//recursion_callingPhase.c

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
        fun1(x-1);
        printf("\nafter: %d",x);            //processing while returning
    }
    return 0;
}
