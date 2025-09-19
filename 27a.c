/*
============================================================================
Name : 27a.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : Execute "ls -RL" using execl() system call.
Date : 7th Sep, 2025
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
  printf(" i am recursively listing every file and directories\n ");
  execl("/bin/ls","ls","-Rl",NULL);
  return 0;
}
/*
============================================================================
Sample Output:

$./a.out
i am recursively listing every file and directories

============================================================================
*/
