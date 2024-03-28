/*
NAME: Devansh singh
UNIVERSITY ROLL NUMBER: 2024025
SECTION: F
PROBLEM STATMENT: Write a program to remove characters from a string except alphabets.
*/
#include<stdio.h>
#include<string.h>
int main() 
{
    int i, j;
    char str[100];
    printf("Input the string:\n");
    fgets(str, 100, stdin);
    for(i = 0, j = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("The new string: %s", str);
    return 0;
}
