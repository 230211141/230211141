/*
NAME: DEVANSH SINGH
UNIVERSITY ROLL NUMBER: 2024025
SECTION: F
Q9.PROBLEM STATEMENT: Design a structure named "Car" to store details like car ID, model, and rental rate per day. 
Write a C program to input data for n cars, calculate the total rental cost for a specified number of 
days, and display the results.
*/
#include<stdio.h>
struct car{
       int id;
       char model[10];
       float rent;
};
int main()
{
      struct car a[10];
      int n,i,days;
      float total_cost,cost;
      printf("\n\t******INPUT******\n");
      printf("Input the number of car detail to be stored:\n");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          printf("Enter the car detail %d:\n",i+1);
          scanf("%d%s%f",&a[i].id,a[i].model,&a[i].rent);
      }
      printf("Input the number of day :\n");
      scanf("%d",&days);
      printf("\n\t******OUTPUT*****\n");
      for(i=0;i<n;i++)
      {
        printf("The detail of the car %d:\n ",i+1);
        cost = (a[i].rent)*(days);
        total_cost += cost;
        printf("Car id :%d\n Model: %s\n",a[i].id,a[i].model);
        printf("Rental cost: $%f\n Cost is: $%f\n",a[i].rent,a[i].rent*days);
      }
      printf("Total cost is : $%.3f\n",total_cost);
      return 0;
}
