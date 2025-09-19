/*
============================================================================
Name : 23.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to create a Zombie state of the running program.
Date : 7th Sep, 2025
============================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{  int pid;
   pid=getpid();
  if(!fork())
   { 
    printf("i am the child process\n");
    
    
   }
  else{
    sleep(20);
   printf("i am waked from sleep state\n");
   wait(0);}
 return 0;
}
/*
============================================================================
Sample Output:

$ gcc 23.c -o 23
$ ./23

(Open another terminal while parent is sleeping:)
$ ps -el | grep 12346
Z    12346   12345   0  80   0 -     0 exit   ?    00:00:00 23 <defunct>

Child is in Z (Zombie) state until parent terminates.
============================================================================
*/
