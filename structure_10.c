#include<stdio.h>
typedef struct company{
    int year;
    float sale;
    float profit;
}com;
int main()
{
    com a[20];
    int n,i;
    float total=0,loss,highest,diff;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The sale and profit between year 2001 to 2010 is :\n",i+1);
        scanf("%d%f%f",&a[i].year,&a[i].sale,&a[i].profit);
    }
    for(i=0;i<n;i++)
    {
        total+=a[i].sale;
    }
    printf("total sale is :%f\n",total);
    loss=highest=a[0].profit;
    for(i=1;i<n;i++)
    {
        if(loss>a[i].profit)
        {
            loss=a[i].profit;
            
        }
        if(highest<a[i].profit){
            highest=a[i].profit;
            
        }
    }
    printf("year of lowest profit is :%f\n",loss);
    printf("year of highest profit is :%f\n",highest);
    
    diff =highest - loss;
    
     printf("difference between high and low profit is : %f\n",diff);
    
    return 0;


}
