/*
NAME: Devansh singh
UNIVERSITY ROLL NUMBER: 2024025
SECTION: F
PROBLEM STATMENT: Write a user define function to find the highest frequency character in a string.
*/
#include <stdio.h>
#include <string.h>
int Frequency(char str[]);
int main() 
{
    char str[100];
    char maxChar;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    maxChar = Frequency(str);
    printf("Highest frequency character appears in a string is %c.\n", maxChar);
    return 0;
}
int Frequency(char str[]) 
{
    int freq[256] = {0}; 
    int i, maxFreq = 0;
    char maxChar;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ') 
            freq[str[i]]++;
    }
    for (i = 0; i < 256; i++) 
    {
        if (freq[i] > maxFreq) 
        {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }
    return maxChar;
}
