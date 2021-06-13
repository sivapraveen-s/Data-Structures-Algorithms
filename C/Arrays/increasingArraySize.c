#include<stdio.h>
#include<stdlib.h>

/*******************************************************************************************************
* increasing the array size, it can be done using dynamic memeory allocation and also increase the array
* size is not a easy job, bcoz we need to shift the values to another array which having more  index size 
* which we need that only we can able to shift the address for eg: here first p is allocate with index 5 
* then we will shift the p values into q which having index 10 which we need, then we allocate the address of
* q to p then p will point to the address q so now, p is having the size 10.
* imp reason for changing with help of another varianle is. if suppose the address continuous after the p will
* not free means we will get intpo memory leaks or segmentation error so we will declare another varible with
* more size then we can access 
***********************************************************************************************************/




int main()
{
    int *p,*q;
    int n;
    printf("\nEnter the number of elements to store in p: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("\nEnter the values to store in p: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    q=(int*)malloc(10*sizeof(int));
    //changing the values into q
    for(int i=0;i<5;i++)
    {
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    printf("\nThe values changed with size increase in p: ");
    for(int i=0;i<10;i++)
    {
        printf("%d ",p[i]);
    }
    /*
    printf("\nThe checking the values in the q: ");
    for(int i=0;i<10;i++)
    {
        printf("%d ",q[i]);
    }
    */
}
