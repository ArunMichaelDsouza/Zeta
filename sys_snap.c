/* Definition of various system date/time/day functions.

   sys_date_def()   Displays the system date in default format.
   sys_day()       - Displays the current system calendar day.
   sys_day_info()  - Displays the complete current system calendar day info.
   sys_time_12hr() - Displays the system time in 12hr format.
   sys_time_24hr() - Displays the system time in 24hr format.
   sys_time_def()  - Displays the system time in default format.

   Coding by - Arun Michael Dsouza
   Date : 12/10/2013

*/

#include "sys_snap.h"
#include <time.h>
#include <stdio.h>
#include <dos.h>
#include <windows.h>

#define SIZE 256
#define IPSIZE 10

char input[IPSIZE];
char buffer[SIZE];
time_t curtime;
struct tm *loctime;



void sys_date_def()
{
    //Displays the system date in default format (MM/DD/YYYY).

    time_t now = time(NULL);
    struct tm *now_s = localtime(&now);

    printf("%02d/%02d/%02d\n",++now_s ->tm_mon,now_s->tm_mday,1900+now_s->tm_year);
}



void sys_day()
{
    //Displays the current system calendar day.

    curtime = time (NULL); //Get the current time
    loctime = localtime (&curtime); //Convert it to local time representation
    strftime(buffer, SIZE, "Today is %A, %B %d.\n", loctime);

    fputs(buffer, stdout);
}



void sys_day_info()
{
    //Displays the complete current system calendar day info.

    curtime = time (NULL); //Get the current time
    loctime = localtime (&curtime); //Convert it to local time representation

    //Print out day and time in a nice format
    strftime(buffer, SIZE, "Today is %A, %B %d.\n", loctime);
    fputs(buffer, stdout);

    strftime(buffer, SIZE, "The time is %I:%M %p.\n", loctime);

    fputs(buffer, stdout);
}



void sys_time_12hr()
{
    //Displays the system time in 12hr format (HH:MM PM/AM).

    curtime = time (NULL); //Get the current time
    loctime = localtime (&curtime); //Convert it to local time representation

    strftime(buffer, SIZE, "The time is %I:%M %p\n", loctime);

    fputs(buffer, stdout);
}



void sys_time_24hr()
{
    //Displays the system time in 24hr format (HH:MM).

    curtime = time (NULL); //Get the current time
    loctime = localtime (&curtime); //Convert it to local time representation

    time_t now = time(NULL);
    struct tm *now_s = localtime(&now);

    printf("The time is %02d:%02d \n",now_s->tm_hour, now_s->tm_min);
}



void sys_time_def()
{
    //Displays the system time in default format (HH:MM:SS).

    curtime = time (NULL); //Get the current time
    loctime = localtime (&curtime); //Convert it to local time representation

    time_t now = time(NULL);
    struct tm *now_s = localtime(&now);

    printf("%02d:%02d:%02d\n",now_s->tm_hour, now_s->tm_min,now_s->tm_sec);
}
