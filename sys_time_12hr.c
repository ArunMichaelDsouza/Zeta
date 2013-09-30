/* Definition of sys_time_12hr() funtion.

   Displays the system time in 12hr format.

   Coding by - Arun Michael Dsouza
   Date : 1/10/2013

*/

#include "sys_time_12hr.h"
#include <time.h>
#include <stdio.h>
#include <dos.h>
#include <windows.h>

#define SIZE 256
#define IPSIZE 10

void sys_time_12hr()
{
    char input[IPSIZE];
    char buffer[SIZE];
    time_t curtime;
    struct tm *loctime;
    curtime = time (NULL); //Get the current time
    loctime = localtime (&curtime); //Convert it to local time representation

    strftime(buffer, SIZE, "The time is %I:%M %p\n", loctime);

    fputs(buffer, stdout);

}
