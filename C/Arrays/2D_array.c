//2D_array.c

/***************************************************************************************************************
 * here there are three methods for declaring and accessing the 2D_array
 * method 1: Direct decalaration and initlization of values in the stack this will increase the stack memory size
 * but it is easy to access and declare
 * method 2: This method we need to allocate 3 pointer variable in the stact the will called and accessed as rows 
 * in array, then remaining will be allocate in the heap this will reduce memory space through
 * dynamic memory allocation we need to declare 4 values.
 * method 3: This methods completely declare everything in the heap not on  stack only initial declaration will be 
 * pointed towards the stack, so declare with **(double) pointer so pointer to pointer method and also allocate 
 * rows with one pointer dynamic memnory allocation (int**)malloc(sizeof(int*);
 *
 * ***************************************************************************************************************/
 
 
#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};            //first method
     
    int *b[3];                                                  //second method here three pointer all the three having the point in stack
    b[0]=(int*)malloc(4*sizeof(int));
    b[1]=(int*)malloc(4*sizeof(int));
    b[2]=(int*)malloc(4*sizeof(int));
    
    int **c;                                                    //third method everything will be allocated in the heap but c will pointing in the stack 
    c=(int**)malloc(3*sizeof(int*));
    c[0]=(int*)malloc(4*sizeof(int));
    c[1]=(int*)malloc(4*sizeof(int));
    c[2]=(int*)malloc(4*sizeof(int));
    
    int i,j;
    //accessing the first method here a 
    printf("\nAccessing the array a: ");
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    //accessing the second method here b
    printf("\nEnter the values for array b: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nAccessing the values of array b: ");
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    //accessing the third method here c
    printf("\nEnter values for array c: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&c[i][j]);        
        }
    }
    printf("\nAccessing the values of array c: ");
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
