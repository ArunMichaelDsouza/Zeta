/* Definition of various string manipulation functions.

   strln()  - Returns the length of the entered string.
   strwht() - Returns the no. of whitespaces in the entered string.

   Coding by - Arun Michael Dsouza
   Date : 02/11/2013

*/

#include "string_manip.h"
#include <stdio.h>

int n=1000; //Default size which can be held
char str[1000];



void strln()
{
    fgets(str, n, stdin);
    scanf("%[^\n]s",str); // Scans the input until the new line character is encountered and stores it

    int len=0;
    while(str[i]!='\0')
    {
      len++;
      i++;
    }

  printf("%d",len);
  printf("\n");
}

void strwht()
{
    fgets(str, n, stdin);
    scanf("%[^\n]s",str); // Scans the input until the new line character is encountered and stores it

    int count=0;
    int len=0;

    i=0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }

    for(i=0;i<=len;i++)
    {
        if(str[i]==(char)32) //Simple equivalent -> if(str[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);
    printf("\n");
}
