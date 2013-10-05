/* Definition of sys_date_def() function.

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

    

}
