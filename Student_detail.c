/*
NAME: DEVANSH SINGH
UNIVERSITY ROLL NUMBER: 2024025
SECTION: F
Q10.PROBLEM STATEMENT:. Create a structure to specify data on students given below: Roll number, Name, Department, 
Course, Year of joining Assume that there are not more than 450 students in the college.
(a) Write a function to print names of all students who joined in a particular year.
(b) Write a function to print the data of a student whose roll number is given.
*/
#include<stdio.h>
typedef struct student_detail{
  
               int roll;
               char nm[20];//name of student
               char depar[20];//Department
               char cou[20];//course
               int year;
}stu;
void joined_year();
void roll_num();
int main()
{
       stu a[20];
       int n,i;
       printf("\n\t******INPUT******\n");
       printf("Input the value of n:\n");
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
           printf("Enter the specify data of student :%d\n",i+1);
           scanf("%d%s%s%s%d",&a[i].roll,a[i].nm,a[i].depar,a[i].cou,&a[i].year);
       }
       joined_year( a,n);
       roll_num(a,n);
       return 0;
}
void joined_year(stu a[],int n)
{
      int y,i;
      printf("\n\t******OUTPUT*****\n");
      printf("Enter the particular year :\n");
      scanf("%d",&y);
      for(i=0;i<n;i++)
      {
          if(y==a[i].year)
          {
               printf("Name of student :%s\n",a[i].nm);
          }
      }
}
void roll_num(stu a[],int n)
{
       int ro,i;
       printf("\n\t******OUTPUT*****\n");
       printf("Enter the roll number :\n");
       scanf("%d",&ro);
       for(i=0;i<n;i++)
       {
         if(ro==a[i].roll)
          {
            printf("Name:%s\n department:%s\n",a[i].nm,a[i].depar);
            printf("cours :%s\nyear :%d\n",a[i].cou,a[i].year);
          }
       }

}