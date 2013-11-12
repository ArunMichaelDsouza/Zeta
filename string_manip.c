/* Definition of various string manipulation functions.

   strln() - Returns the length of the entered string.

   Coding by - Arun Michael Dsouza
   Date : 02/11/2013

*/

#include "string_manip.h"
#include <stdio.h>

void strln()
{
    int n=1000; //Default size which can be held
    char str[n];
    fgets(str, n, stdin);
    scanf("%[^\n]s",str);
    int i=0;
    int len=0;
    while(str[i]!='\0')
    {
      len++;
      i++;
    }

  printf("%d",len);
  printf("\n");
}
