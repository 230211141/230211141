#include<stdio.h>
typedef struct student{
      char nm[20];
      int age;
      float tmark;
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
printf("the record of student:%d\n",i+1);
scanf("%s%d%f",a[i].nm,&a[i].age,&a[i].tmark);
}
printf("the information is :\n");
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j].tmark>a[j+1].tmark)
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<n;i++)
{
printf("Name:%s, age:%d, total marks:%f\n",a[i].nm,a[i].age,a[i].tmark);
avg+=a[i].tmark;
}
avg/=n;
printf("average marks is :%f\n",avg);
return 0;
}



