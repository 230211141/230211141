/*
NAME: DEVANSH SINGH
UNIVERSITY ROLL NUMBER: 2024025
SECTION: F
Q8.PROBLEM STATEMENT: Write a Program to input an array and reverse the array elements from particular index to the 
last using dynamic memory allocation.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
      int n,i,k,t,j;
      printf("\n\t******INPUT******\n");
      printf("Input the value of n:\n");
      scanf("%d",&n);
      int *arr=(int*)malloc(n*sizeof(int));
       if (arr == NULL) 
       {
            printf("Memory allocation failed.");
            return 1;
       }
      printf("Enter an array :\n");
      for(i=0;i<n;i++) 
      {
            scanf("%d",&arr[i]);
      }
      printf("Input the particular index:\n");
      scanf("%d",&k);
      if(k<0 && k>=n)
      {
            printf("Invalid:\n");
      }
      printf("\n\t******OUTPUT*****\n");
      printf("The reverse of array element from a particular index to the last :\n");
      for(i=k,j=n-1;i<=j;i++,j--)
      {
            t=arr[i];
            arr[i]=arr[n-i-1+k];
            arr[n-i-1+k]=t;
      }
      for(i=0;i<n;i++)
      {
            printf("%d\t",arr[i]);
      }
      free(arr);
      return 0;
}