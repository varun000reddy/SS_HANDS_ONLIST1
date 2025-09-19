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
    chdir("/");
    freopen("/dev/null","r",stdin);
    freopen("/dev/null","w",stdout);
    freopen("/dev/null","w",stderr);
    sleep(10);
    system("/home/varun/hands_on1/script.sh");
    exit(EXIT_SUCCESS);
}
/*
============================================================================
Sample Output:
daemon script

============================================================================
*/
