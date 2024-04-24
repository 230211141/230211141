#include<stdio.h>
struct book{
    char tit[100];
    char aut[100];
    int pri;

};
int main()
{
    struct book a[50];
    int n,i,exp=0;
    printf("Input the number of book detail:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter title,authot and prize of book %d:\n", i+1);
        scanf("%s%s%d",a[i].tit,a[i].aut,&a[i].pri);
    }
    printf("The detail is :\n");
    for(i=0;i<n;i++)
    {
        printf("title:%s, author:%s, prize:%d\n",a[i].tit, a[i].aut, a[i].pri);
        if (a[i].pri > exp) {
            exp = a[i].pri; 
        }
    }
    printf("Books with the highest and lowest price:\n");
    for (i = 0; i < n; i++) {
        if (a[i].pri == exp) {
            printf("highest\n");
            printf("Title: %s, Author: %s, Price: %d\n", a[i].tit, a[i].aut, a[i].pri);
        }
        else{
            printf("lowest\n");
            printf("Title: %s, Author: %s, Price: %d\n", a[i].tit, a[i].aut, a[i].pri);
        }

    }
    
    return 0;
}
