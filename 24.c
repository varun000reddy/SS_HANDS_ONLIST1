/*
============================================================================
Name : 24.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to create an Orphan process.
Date : 7th Sep, 2025
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
  if(!fork())
  {
    printf("i am the child and my process id is:%d and my parent process id is : %d \n",getpid(),getppid());
    sleep(20);
    printf("my process id is: %d and my parent process id is : %d \n",getpid(),getppid());
   }
  else{
   printf("i am not waiting for the child to return its status\n");
   exit(0);
  }
  
}
/*
============================================================================
Sample Output:

$./a.out
i am not waiting for the child to return its status
i am the child and my process id is:9463 and my parent process id is:9462
varun@varun:~/hans_on1$my process id is:9463 and my parent process is is:2437
============================================================================
*/
