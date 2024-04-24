#include<stdio.h>
struct car{
     int id;
     char model[10];
     int rean;
     int day;

};
int main()
{
    struct car a[10];
    int n,i,cost=0;
    //int days;
    printf("Input the number of car detail to be stored:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the car detail %d:\n",i+1);
        scanf("%d%s%d%d",&a[i].id,a[i].model,&a[i].rean,&a[i].day);
    }
    //printf("Car details with rental cost for %d days:\n", days);
    for(i=0;i<n;i++)
    {
       cost = (a[i].rean)*(a[i].day);
       printf("Car id : %d, model : %s , rental cost : $%d, days:%d\n",a[i].id,a[i].model,a[i].rean,a[i].day);
       printf("cost is : %d",cost);
    }
    return 0;
}
