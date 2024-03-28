/*
NAME: Devansh singh
UNIVERSITY ROLL NUMBER: 2024025
SECTION: F
PROBLEM STATMENT: Write a program in C to find the sum of the lower triangular elements of a matrix.
*/
#include<stdio.h>
int main()
{
       int m,n,i,j,arr[50][50],sum=0;
       printf("Input the number of rows:\n");
       scanf("%d",&n);
       printf("Input the number of column:\n");
       scanf("%d",&m);
       printf("Enter the element in the martrix:\n");
       for(i=0 ; i<n ; i++)
       {
          for(j=0 ; j<m ; j++)
          {
              scanf("%d",&arr[i][j]);
          }  
       }
       printf("Lower triangular matrix element :\n");
       for(i=0 ; i<n ; i++)
       {
          for(j=0 ; j<i ; j++)
          {
                 printf("%d",arr[i][j]);
                 sum= sum + arr[i][j];
          }
       }
       printf("\nSum of lower triangular matrix elelemt :%d\n",sum);  
       return 0;
}