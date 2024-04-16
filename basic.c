#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char str1[20],str2[20],str3[30];
    int len1=strlen(str1);
     int len2=strlen(str2);
    //char str1[20],str2[20],str3[30];
    fgets(str1,20,stdin);//1 string
    fgets(str1,20,stdin);//2 string
    scanf("%d",&n);//index
    for(i=0;i<n;i++){
        str3[i]=str1[i];
    }
    strcat(str3,str2);
    printf("%s",str3);
    return 0;
}