//selection sort  

#include <stdio.h>

int arrayBuf[6] = {2, 4, 3, 1, 9, 1};

int tempArrayBuf[6];

int main()
{
    printf("Original Array: ");
    for(int indx = 0; indx < 6; indx ++)
    {
        printf("%d ", arrayBuf[indx]);
    }
    
    int i, j;
    
    int iMin;
    
    for(i = 0; i < 6 - 1; i ++)
    {
        iMin = i;
        for(j = i + 1; j < 6; j ++)
        {
            if(arrayBuf[j] < arrayBuf[iMin])
            {
                iMin = j;
            }
        }
        
        int temp = 0;
            
        temp = arrayBuf[i];
        arrayBuf[i] = arrayBuf[iMin];
        arrayBuf[iMin] = temp;
        
    }
    
    printf("\nSorted Array: ");
    for(int indx = 0; indx < 6; indx ++)
    {
        printf("%d ", arrayBuf[indx]);
    }
    
}
