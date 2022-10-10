// bubble sort  

#include <stdio.h>

int arr[] = {5, 1, 4, 2, 8, 7};

void bubbleSort(int arr[], int n)
{
    int i = 0, j = 0;
    
    for(i = 0; i < n - 1; i ++)
    {
        for(j = 0; j < n - i - 1; j ++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main()
{
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Length of array: %d \n", n);
    
    bubbleSort(arr, n);
    
    printf("Sorted Array: ");
    
    for(int indx = 0; indx < n; indx ++)
    {
        printf("%d ", arr[indx]);
    }
}
