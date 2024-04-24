#include<stdio.h>
struct circle{
    float rad;
};
int main()
{
    struct circle a[100];
    int n,i,area,per;
    printf("Input the number of circle:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the raadius of circle %d:\n",i+1);
        scanf("%f",&a[i].rad);
    }
    printf("The area and permeter are:\n");
    for(i=0;i<n;i++)
    {
       area = 3.14*a[i].rad*a[i].rad;
       per = 2*3.14*a[i].rad;
        printf("The area and perimeter of circle %d:\n",i+1);
        printf("area: %d, perimetere:%d \n",area,per);
    }
   
    return 0;
}