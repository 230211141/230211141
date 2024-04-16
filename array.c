#include <stdio.h>
void cubeArray(int *arr, int size) 
{
    for (int i = 0; i < size; i++)
     {
        arr[i] = arr[i] * arr[i] * arr[i];
    }
}

int main()
 {
    int size,i,arr[50];
    printf("Input the size:\n");
    scanf("%d",&size);
    printf("input the array element:\n");
    for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    printf("Original Array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    cubeArray(arr, size);
    printf("Resultant Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
