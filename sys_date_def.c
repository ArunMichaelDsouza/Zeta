/* Definition of sys_date_def() funtion.

   Displays the system date in default format.
   The date can also be set accordingly using this function.

   Coding by - Arun Michael Dsouza
   Date : 1/10/2013

*/

#include "sys_date_def.h"
#include <time.h>
#include <stdio.h>
#include <dos.h>
#include <windows.h>

void sys_date_def()
{
    time_t now = time(NULL);
    struct tm *now_s = localtime(&now);

    printf("%02d/%02d/%02d\n",++now_s ->tm_mon,now_s->tm_mday,1900+now_s->tm_year);

}
