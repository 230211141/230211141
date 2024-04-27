#include<stdio.h>
typedef struct bank{
    char nm[20];
    float bal;
    float loan;
}bank;
int main()
{
    bank a[20];
    int n,i;
    printf(":Enter the number of customer detail:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("deatil of customer of:%d\n",i+1);
        scanf("%s%f%f",a[i].nm,&a[i].bal,&a[i].loan);
    }
    for(i=0;i<n;i++)
    {
       if(a[i].loan==0.0 && a[i].bal>500000.00)
       {
          printf("loan can be given to:%s\n",a[i].nm);
       }
       else{
        printf("loan can not be given to:%s\n",a[i].nm);
       }

    }
    return 0;
}