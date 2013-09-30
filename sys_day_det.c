/* Definition of sys_day_det() function.

   Displays the current system calendar day in a detailed format.

   Coding by - Arun Michael Dsouza
   Date : 1/10/2013

*/

#include "sys_day_det.h"
#include <time.h>
#include <stdio.h>
#include <dos.h>
#include <windows.h>

#define SIZE 256
#define IPSIZE 10

void sys_day_det()
{
    char input[IPSIZE];
    char buffer[SIZE];
    time_t curtime;
    struct tm *loctime;
    curtime = time (NULL); //Get the current time
    loctime = localtime (&curtime); //Convert it to local time representation

	//Print out day and time in a nice format
    strftime(buffer, SIZE, "Today is %A, %B %d.\n", loctime);
    fputs(buffer, stdout);

     //Print out the date and time in the standard format
    fputs(asctime (loctime), stdout);

    strftime(buffer, SIZE, "The time is %I:%M %p.\n", loctime);

    fputs(buffer, stdout);

}
