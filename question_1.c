/*
NAME: Devansh singh
UNIVERSITY ROLL NUMBER: 2024025
SECTION: F
PROBLEM STATMENT: 1. Write a user define function in C to print all unique elements in an array.
*/
#include<stdio.h>
void unielement(int[],int);
int main()
{
       int n,arr[50],i,res;
       printf("Input the size of the array:");
       scanf("%d",&n);
       printf("Input the element in array:");
       for(i=0 ; i<n ; i++)
       {
           scanf("%d",&arr[i]);
       }
       printf("The unique element in the array are:");
       
       unielement(arr,n);
       return 0;
}
void unielement(int arr[],int n)
{
       int i,j,f;
       for(i=0 ; i<n ; i++)
       {
          f=0;
          for(j=0 ; j<n ; j++)
          {
              if(i!=j && arr[i]==arr[j])
              {
                  f=1; 
                  break;
              }
          }
           if(f==0)
            {
                printf("%d\t\n",arr[i]);
            }
       }  
}