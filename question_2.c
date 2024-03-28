/*
NAME: Devansh Singh
UNIVERSITY ROLL NUMBER: 2024025
SECTION: F
PROBLEM STATMENT: Write a program in C to separate odd and even integers into separate arrays.
*/
#include<stdio.h>
int main()
{
      int i, n, arr[50], arev[50], arrod[50], evencount = 0, oddcount = 0;
      printf("Input the size of array: ");
      scanf("%d", &n);
      printf("Input the elements of array: ");
      for(i = 0; i < n; i++) 
        {
           scanf("%d", &arr[i]);
           if (arr[i] % 2 == 0)
            {
                arev[evencount++] = arr[i];
            }
           else
            {
                arrod[oddcount++] = arr[i];
            }
        }
      printf("The Even elements are: ");
      for(i = 0; i < evencount; i++) 
        {
            printf("%d ", arev[i]);
        }
      printf("\nThe Odd elements are: ");
      for(i = 0; i < oddcount; i++) 
        {
            printf("%d ", arrod[i]);
        }
    return 0;
}
