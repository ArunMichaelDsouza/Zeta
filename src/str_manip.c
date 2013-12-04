/* Definition of various string manipulation functions.

   strln()    - Returns the length of the entered string.
   strwht()   - Returns the no. of whitespaces in the entered string.
   strslice() - Returns a sub string from the entered string using the mentioned indices.

   Coding by - Arun Michael Dsouza
   Date : 02/11/2013

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "str_manip.h"

#define MAX 100



void strln()
{
    char str[MAX];
    int i=0;

    printf("%c ",175);
    fgets(str,sizeof(str),stdin);

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
    char str[MAX];
    int i=0;

    printf("%c ",175);
    fgets(str,sizeof(str),stdin);

    int count=0;
    int len=0;
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



void strslice()
{
    char str[MAX];
    int i=0;
    char strt[MAX],end[MAX];

    printf("%c ",175);
    fgets(str,sizeof(str),stdin);
    printf("%c ",175);
    fgets(strt,sizeof(strt),stdin);
    printf("%c ",175);
    fgets(end,sizeof(end),stdin);

    int s = atoi(strt); // Converts the entered value (which is a string) into an integer
    int e = atoi(end);

    if((s<0 || s>strlen(str))||(e>strlen(str) || e<0))
    {
        printf("\a\nInvalid indices specified.");
    }
    else
    {
    for(i=s;i<e;i++)
    {
        printf("%c",str[i]);
    }
    }

    printf("\n");
}
