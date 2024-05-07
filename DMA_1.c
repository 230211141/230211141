#include<stdio.h> 
#include<stdlib.h> 
int main(){
    int *ptr;
    int n,m;
    printf("Enter the value n:\n");
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));
    printf("Input the value:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    if(ptr==NULL)
    {
        printf("memory aloocation falied");
        return 1;
    }
    
    printf("Enter the value m :\n");
    scanf("%d",&m);
    ptr=realloc(ptr,m);
     if (ptr == NULL) {
        printf("memory reallocation failed");
        return 1;
    }
    
    printf("input the value:\n");
    for(int i=0;i<m;i++){
        scanf("%d",&ptr[i]);
    }
    
    for(int i=0;i<m;i++){
     printf("number :%d is :%d\n",i+1,ptr[i]); 
    }
    
    free(ptr);
    return 0;
}