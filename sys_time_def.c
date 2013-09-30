/* Definition of sys_time_def() function.

   Displays the system time in default format.
   The time can also be set accordingly using this function.

   Coding by - Arun Michael Dsouza
   Date : 1/10/2013

*/

#include "sys_time_def.h"
#include <time.h>
#include <stdio.h>
#include <dos.h>
#include <windows.h>

#define SIZE 256
#define IPSIZE 10

void sys_time_def()
{
    char input[IPSIZE];
    char buffer[SIZE];
    time_t curtime;
    struct tm *loctime;
    curtime = time (NULL); //Get the current time
    loctime = localtime (&curtime); //Convert it to local time representation

    time_t now = time(NULL);
    struct tm *now_s = localtime(&now);

    printf("%02d:%02d:%02d\n",now_s->tm_hour, now_s->tm_min,now_s->tm_sec);

}
