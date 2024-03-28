/*
NAME: Devansh singh
UNIVERSITY ROLL NUMBER: 2024025
SECTION: F
PROBLEM STATMENT: Write a program in C to split string by space into words.
*/
#include <stdio.h>
#include <string.h>
int main()
{
      char str[100];
      int i, j, len;
      printf("Enter a string: ");
      fgets(str, sizeof(str), stdin);
      len = strlen(str);
      printf("Strings or words after split by space are:\n");
      for (i = 0; i < len; i++) 
      {
          if (str[i] != ' ' && str[i] != '\n') 
           {
               printf("%c", str[i]);
               if (str[i + 1] == ' ' || str[i + 1] == '\n')
               {
                  printf("\n");
               }
           }
      }
      return 0;
}
