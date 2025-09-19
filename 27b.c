/*
============================================================================
Name : 27b.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : Execute "ls -RL" using execlp() system call.
Date : 7th Sep, 2025
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
  printf("i am recursively listing every file and directories\n");
  execlp("ls","ls","-Rl",NULL);
  return 0;
}
/*
============================================================================
Sample Output:

$ gcc 27b.c -o 27b
$ ./27b
i am recursively listing every file and directories

============================================================================
*/

