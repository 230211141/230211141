// creat a structure for a bank ,id,name,account balance and display
#include<stdio.h>
typedef struct bank{
       int id;
       char nm[20];
       float bal;
}bank;
int main()
{
  bank a[20];
  int n,i;
  printf("Input the record show for customer:\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the recoder for the customer:\n",i+1);
    scanf("%d%f%s",&a[i].id,&a[i].bal,a[i].nm);
  }
  for(i=0;i<n;i++)
  {
   
    printf("Customer id:%d, Name:%s, Balance:%f\n",a[i].id,a[i].nm,a[i].bal);
  }  
  return 0;
}