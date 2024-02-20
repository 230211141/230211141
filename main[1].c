/*wAP to input5 element and store them in an array and print the element stored in array*/
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the array element\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array element are as follow\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}