
#include<stdio.h>
typedef struct student{
      char tit[20];
      char aut[20];
      float pri;
}stu;
int main()
{
stu a[20],t;
int i,j,n;
float avg;
printf("Enter the value of n:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("the record of books :%d\n",i+1);
scanf("%s%s%f",a[i].tit,a[i].aut,&a[i].pri);
}
printf("the information is :\n");
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j].pri>a[j+1].pri)
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<n;i++)
{
printf("book :%s, author:%s, price :%f\n",a[i].tit,a[i].aut,a[i].pri);

}

return 0;
}