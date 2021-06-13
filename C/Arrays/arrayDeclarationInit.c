#include<stdio.h>
int main()
{
    int a[5];               //initalizing a with 5 elements space each members having a garbage values
    int b[5]={1,2,3,4,5};   //initalizing b with 5 elements space both declaration and initalizion all done
    int c[5]={1,2};         //we can decalre minimum value also but no maxmium once we declare any one index all to be intilized to be zero
    int d[5]={0};           //garbage values removed and all values remain zero
    int e[]={1,2,3,4,5};    //it automatically allocates the size 5
    //int f[2]={1,2,3};     //wrong declaration
    
    //finding size of the array
    //here we didnt know the size of array e
    int size_array_e=sizeof(e)/sizeof(e[0]);
    
    printf("\nThe size of the array e is: %d",size_array_e);
    printf("\nThe accessing e element is: ");
    for(int i=0;i<size_array_e;i++)
    {
        printf("%d ",*(e+2));
    }

    printf("\nThe accesing the elements b is: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\naccessing all elements in the array c: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",c[i]);
    }
    
}
