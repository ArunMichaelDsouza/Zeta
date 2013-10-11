/* Zeta Command Interpreter.

   Zeta is a prompt or command interpreter built purely in C.
   It provides a command-line interface to users to access the services offered by
   the kernel of the OS.
   Works with the Windows line of Operating Systems.

   Coding by - Arun Michael Dsouza
   Date : 26/08/2013

   NOTE : Zeta has been built at an 'implementation-scale'. Although the native OS
          is equipped with a standard command-line utility, use of Zeta is completely encouraged.
*/



//Header File Inclusion

#include <stdio.h>
#include <string.h>
#include <process.h>
#include <stdlib.h>

#include "sys_time_def.h"
#include "sys_time_24hr.h"
#include "sys_time_12hr.h"


void initiate();
void main_exit();

int main(int argc, char const *argv[])
{
	initiate();
	return 0;
}

void initiate()
{
    char input[30];

    //Prompt Start

    printf("\n:> ");
    scanf("%s",&input);

    //----------------------------------------------------------------------------------------
    //EXIT COMMAND
    if ((stricmp(input,"exit")==0))//To exit command interpreter
    {
        main_exit();
    }
    //----------------------------------------------------------------------------------------

    //----------------------------------------------------------------------------------------
    //CLEAR SCREEN COMMAND
    else if(stricmp(input,"clr")==0) //To clear screen
    {
    	system("cls");
        initiate();
    }
    //----------------------------------------------------------------------------------------


    //----------------------------------------------------------------------------------------
    //TIME COMMANDS
    else if ((stricmp(input,"time")==0)) //To show time (default format:24hr HH/MM/SS.MS)
    {
    	sys_time_def();
    	initiate();
    }

    else if ((stricmp(input,"time-24")==0)) //To show time in 24hrformat:HH/MM
    {
    	sys_time_24hr();
    	initiate();
    }

    else if ((stricmp(input,"time-12")==0)) //To show time in 12hr format:HH:MM AM/PM
    {
        sys_time_12hr();
        initiate();
    }

    else if ((stricmp(input,"time-e")==0)) //To show time and provide 'editing' option
    {
        system("time");
        initiate();
    }
    //----------------------------------------------------------------------------------------

    //----------------------------------------------------------------------------------------
    //DATE COMMANDS
    else if ((stricmp(input,"date")==0)) //To show date (default format:MM/DD/YYYY)
    {
    	sys_date_def();
    	initiate();
    }

    else if ((stricmp(input,"date-e")==0)) //To show date and provide 'editing' option
    {
        system("date");
        initiate();
    }
    //----------------------------------------------------------------------------------------

    //----------------------------------------------------------------------------------------
    //DAY COMMANDS
    else if ((stricmp(input,"day")==0)) //To show day/date of month
    {
    	sys_day();
    	initiate();
    }

    else if ((stricmp(input,"day-d")==0)) //To show day info in detailed format
    {
    	sys_day_det();
    	initiate();
    }
    //----------------------------------------------------------------------------------------

	else
    {
    	printf("\aCommand not found. \n");
    	initiate();
    }


}



void main_exit()
{
    exit(0);
}








