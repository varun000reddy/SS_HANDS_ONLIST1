/*
============================================================================
Name : 21.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program, call fork() and print the parent and child process IDs.
Date : 7th Sep, 2025
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{ 
  int id;
  int val;
  
  if(!fork()){
   id=getpid();
   printf("the child process pid is:%d\n",id);
  }
  else{
  id=getpid();
    printf("the parent process pid is:%d\n",id);
    wait(0);}
  return 0;
}
/*
============================================================================
Sample Output:

the child process pid is 6526
the  parent process pid is 6525

============================================================================
*/
