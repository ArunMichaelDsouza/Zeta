/* Zeta Command Interpreter.

   Zeta is a Command interpreter built purely in C.
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

#include "sys_snap.h"
#include "str_manip.h"

void initiate();
void main_exit();

#define SIZE 50
char input[SIZE];



int main(int argc,char* argv[])
{
	initiate();
	return 0;
}



void initiate()
{
    //Prompt Start

    printf("\n:> ");
    fgets(input,sizeof(input),stdin);

    //----------------------------------------------------------------------------------------
    //EXIT COMMAND
    if((stricmp(input,"exit\n")==0)) //To exit command interpreter
    {
        main_exit();
    }
    //----------------------------------------------------------------------------------------

    //----------------------------------------------------------------------------------------
    //CLEAR SCREEN COMMAND
    else if(stricmp(input,"clr\n")==0) //To clear screen
    {
    	system("cls");
        initiate();
    }
    //----------------------------------------------------------------------------------------


    //----------------------------------------------------------------------------------------
    //TIME COMMANDS
    else if((stricmp(input,"time\n")==0)) //To show time (default format-24hr HH/MM/SS.MS)
    {
    	sys_time_def();
    	initiate();
    }

    else if((stricmp(input,"time-24\n")==0)) //To show time in 24hrformat (HH:MM)
    {
    	sys_time_24hr();
    	initiate();
    }

    else if((stricmp(input,"time-12\n")==0)) //To show time in 12hr format (HH:MM AM/PM)
    {
        sys_time_12hr();
        initiate();
    }

    else if((stricmp(input,"time-e\n")==0)) //To show time and provide 'editing' option
    {
        system("time");
        initiate();
    }
    //----------------------------------------------------------------------------------------

    //----------------------------------------------------------------------------------------
    //DATE COMMANDS
    else if((stricmp(input,"date\n")==0)) //To show date (default format:MM/DD/YYYY)
    {
    	sys_date_def();
    	initiate();
    }

    else if((stricmp(input,"date-e\n")==0)) //To show date and provide 'editing' option
    {
        system("date");
        initiate();
    }
    //----------------------------------------------------------------------------------------

    //----------------------------------------------------------------------------------------
    //DAY COMMANDS
    else if((stricmp(input,"day\n")==0)) //To show day/date of month
    {
    	sys_day();
    	initiate();
    }

    else if((stricmp(input,"day-i\n")==0)) //To show complete day info
    {
    	sys_day_info();
    	initiate();
    }
    //----------------------------------------------------------------------------------------

    //----------------------------------------------------------------------------------------
    // STRING MANIPULATION COMMANDS
    else if((stricmp(input,"strln\n")==0)) // Returns length of String
    {
        strln();
        initiate();
    }

    else if((stricmp(input,"strwht\n")==0)) // Returns no. of whitespaces in the String
    {
        strwht();
        initiate();
    }

    else if((stricmp(input,"strslice\n")==0)) // Returns a SubString from the given String using mentioned indices
    {
        strslice();
        initiate();
    }
    //----------------------------------------------------------------------------------------

	else
	{
        printf("\aCommand not found.\n");
        initiate();
	}
}



void main_exit()
{
    exit(0);
}
