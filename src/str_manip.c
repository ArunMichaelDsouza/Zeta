/* Definition of various string manipulation functions.

   strln()    - Returns the length of the entered string.
   strwht()   - Returns the no. of whitespaces in the entered string.
   strslice() - Returns a sub string from the entered string using the mentioned indices.
   strcap()   - Capitalises the entered String.
   strtolow() - Converts uppercase String to lowercase.

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

    printf("  %d",len);
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
    printf("  %d",count);
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
        printf("  ");
        for(i=s;i<e;i++)
        {
            printf("%c",str[i]);
        }
    }

    printf("\n");
}



void strcap()
{
    char str[MAX];
    int i=0;

    printf("%c ",175);
    fgets(str,sizeof(str),stdin);

    for(i=0;i<strlen(str);i++)
    {
        switch(str[i])
        {
            case 'a':
            str[i]='A';
            break;

            case 'b':
            str[i]='B';
            break;

            case 'c':
            str[i]='C';
            break;

            case 'd':
            str[i]='D';
            break;

            case 'e':
            str[i]='E';
            break;

            case 'f':
            str[i]='F';
            break;

            case 'g':
            str[i]='G';
            break;

            case 'h':
            str[i]='H';
            break;

            case 'i':
            str[i]='I';
            break;

            case 'j':
            str[i]='J';
            break;

            case 'k':
            str[i]='K';
            break;

            case 'l':
            str[i]='L';
            break;

            case 'm':
            str[i]='M';
            break;

            case 'n':
            str[i]='N';
            break;

            case 'o':
            str[i]='O';
            break;

            case 'p':
            str[i]='P';
            break;

            case 'q':
            str[i]='Q';
            break;

            case 'r':
            str[i]='R';
            break;

            case 's':
            str[i]='S';
            break;

            case 't':
            str[i]='T';
            break;

            case 'u':
            str[i]='U';
            break;

            case 'v':
            str[i]='V';
            break;

            case 'w':
            str[i]='W';
            break;

            case 'x':
            str[i]='X';
            break;

            case 'y':
            str[i]='Y';
            break;

            case 'z':
            str[i]='Z';
            break;

            default:
            break;
        }
    }

    printf("  %s",str);
}



void strtolow()
{
    char str[MAX];
    int i=0;

    printf("%c ",175);
    fgets(str,sizeof(str),stdin);

    for(i=0;i<strlen(str);i++)
    {
        switch(str[i])
        {
            case 'A':
            str[i]='a';
            break;

            case 'B':
            str[i]='b';
            break;

            case 'C':
            str[i]='c';
            break;

            case 'D':
            str[i]='d';
            break;

            case 'E':
            str[i]='e';
            break;

            case 'F':
            str[i]='f';
            break;

            case 'G':
            str[i]='g';
            break;

            case 'H':
            str[i]='h';
            break;

            case 'I':
            str[i]='i';
            break;

            case 'J':
            str[i]='j';
            break;

            case 'K':
            str[i]='k';
            break;

            case 'L':
            str[i]='l';
            break;

            case 'M':
            str[i]='m';
            break;

            case 'N':
            str[i]='n';
            break;

            case 'O':
            str[i]='o';
            break;

            case 'P':
            str[i]='p';
            break;

            case 'Q':
            str[i]='q';
            break;

            case 'R':
            str[i]='r';
            break;

            case 'S':
            str[i]='s';
            break;

            case 'T':
            str[i]='t';
            break;

            case 'U':
            str[i]='u';
            break;

            case 'V':
            str[i]='v';
            break;

            case 'W':
            str[i]='w';
            break;

            case 'X':
            str[i]='x';
            break;

            case 'Y':
            str[i]='y';
            break;

            case 'Z':
            str[i]='z';
            break;

            default:
            break;
        }
    }

    printf("  %s",str);
}
