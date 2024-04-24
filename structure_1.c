#include<stdio.h>

struct name 
{
    char nm[50]; 
    int age;
    float tmar;
};

int main() {
    struct name a[50];
    int n, i;
    float avg;
    printf("Input the number of students:\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    {
        printf("Enter name, age, and marks for student %d:\n", i+1);
        scanf("%s%d%f", a[i].nm, &a[i].age, &a[i].tmar);
    }

    printf("The information is:\n");
    for(i = 0; i < n; i++) 
    {
        printf("Name: %s, Age: %d, Marks: %.2f\n", a[i].nm, a[i].age, a[i].tmar);
        avg += a[i].tmar; 
    }
    avg /= n; 
    printf("Average marks: %.2f\n", avg);
    return 0;
}
