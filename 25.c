/*
============================================================================
Name : 25.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to create three child processes. 
The parent should wait for a particular child (use waitpid system call).
Date : 7th Sep, 2025
============================================================================
*/

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
int main()
{
   int status;
   int pid1,pid2,pid3;
   pid_t pro;
   if(!(pid1=fork()))
    {
      printf("first child process with pid: %d and parent pid: %d\n",getpid(),getppid());
      exit(0);
    }
   if(!(pid2=fork()))
    {
      printf("second child process with pid: %d and parent pid: %d\n",getpid(),getppid());
      exit(0);
    }
    if(!(pid3=fork()))
    {
     printf("third child process with pid: %d and parent pid: %d\n",getpid(),getppid());
     exit(0);
    }
    pro=waitpid(pid3,&status,0);
   if(pro==pid3)
    {
      printf("i waited for third child\n");
    }
    return 0;
} 
/*
============================================================================
Sample Output:

first child process with pid: 9551 and parent pid:9550
secind child process with pid: 9552 and parent pid:9550
third child process with pid: 9553 and parent pid:9550
i waited for third child
============================================================================
*/
