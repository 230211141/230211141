/*
Q5. Draw a flowchart to input a string and pass it to a function. Access the string using 
pointers and print the vowels present in the string in reverse order implementing toggle case.
Sample input: abhdUgIfthdueGitsO
Sample output: oIEUiuA 

*/
#include<stdio.h>
#include<string.h>
void toggle(char *str)
{
    int i=0,j=0,len;
    char str1[50],temp;
    len=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'|| str[i]=='o'|| str[i]=='u' || str[i]=='A'|| str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                str1[j++]=str[i]+32;
            }
            else if(str[i]>='a'&& str[i]<='z')
            {
                str1[j++]=str[i]-32;
            }
        }
    }
    str1[j] = '\0';
    //Reverse.
    for(i=0,j=strlen(str1)-1;i<j;i++,j--)
    {
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
    }
    puts(str1);

}
int main()
{
    char str[50];
    printf("input the string:\n");
    fgets(str,50,stdin);
    toggle(str);
    return 0;
}