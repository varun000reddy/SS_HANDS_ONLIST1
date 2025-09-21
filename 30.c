/*
============================================================================
Name : 30.c
Author : CHINTHA JOGGARI VARUN REDDY
Description :
Write a program to run a script at a specific time using a Daemon process. give step by step code
Date : 7th Sep, 2025
============================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
int main()
{
    int pid, sid;
    pid = fork();
    if(pid<0)
    exit(EXIT_FAILURE);
    if(pid>0)
    exit(EXIT_SUCCESS);
    umask(0);
    sid=setsid();
    if(sid<0)
    exit(EXIT_FAILURE);
    int target_hour = 18;   // 24-hour format
    int target_min  = 22;   // target minute

    while (1) {
        time_t now = time(NULL);
        struct tm *t = localtime(&now);

        if (t->tm_hour == target_hour && t->tm_min == target_min) {
            system("./script.sh >> daemon.txt 2>&1");
            sleep(1); // prevent multiple runs in same minute
        }
        sleep(5); // check every 5 seconds
    }

    return 0;
}



/*
============================================================================
Sample Output:
daemon script

============================================================================
*/
