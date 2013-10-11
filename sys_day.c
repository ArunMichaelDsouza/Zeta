/* Definition of sys_day() function.

   Displays the current system calendar day.

   Coding by - Arun Michael Dsouza
   Date : 1/10/2013

*/

#include "sys_day.h"
#include <time.h>
#include <stdio.h>
#include <dos.h>
#include <windows.h>

#define SIZE 256
#define IPSIZE 10

void sys_day()
{
    char input[IPSIZE];
    char buffer[SIZE];
    time_t curtime;
    struct tm *loctime;
    curtime = time (NULL); //Get the current time
    loctime = localtime (&curtime); //Convert it to local time representatio

    strftime(buffer, SIZE, "Today is %A, %B %d.\n", loctime);

    fputs(buffer, stdout);

}
