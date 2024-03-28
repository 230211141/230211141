/*
NAME: Devansh singh
UNIVERSITY ROLL NUMBER: 2024025
SECTION: F
PROBLEM STATMENT: Write a program in C to find the max element of each row of a matrix.
*/
#include <stdio.h>
int main() 
{
      int m, n, i, j, arr[50][50], max;
      printf("Input the number of rows:\n");
      scanf("%d", &n);
      printf("Input the number of columns:\n");
      scanf("%d", &m);
      printf("Enter the elements in the matrix:\n");
      for (i = 0; i < n; i++) 
      {
          for (j = 0; j < m; j++)
          {
              scanf("%d", &arr[i][j]);
          }
      }
      for (i = 0; i < n; i++)
      {
          max = arr[i][0]; 
          for (j = 1; j < m; j++)
          {
              if (arr[i][j] > max)
              {
                  max = arr[i][j];
              }
          }
          printf("Maximum element in row %d: %d\n", i + 1, max);
      }
      return 0;
}
