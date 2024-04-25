#include<stdio.h>
typedef struct student{
    int roll;
    float marks;
     struct xy{
        int i;
        int j;

    }s;

}stu;
int main()
{
  stu a[20];
  int n,k;
  printf("input the total no of the student:\n");
  scanf("%d",&n);
  for(k=0;k<n;k++)
  {
    printf("Enter the student record:\n",k+1);
    scanf("%d%f%d%d",&a[k].roll,&a[k].marks,&a[k].s.i,&a[k].s.j);
  }
  for(k=0;k<n;k++)
  {
    printf("roll:%d ,marks:%f,i:%d,j:%d\n",a[k].roll,a[k].marks,a[k].s.i,a[k].s.j);
  }
  return 0;

}
