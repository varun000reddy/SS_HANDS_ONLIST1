/*
============================================================================
Name : 27c.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : Execute "ls -RL" using execle() system call with custom environment.
Date : 7th Sep, 2025
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
  extern char **environ;
  execle("/bin/ls","ls","-Rl",NULL,environ);
  return 0;
}
/*
============================================================================
Sample Output:

$ gcc 27c.c -o 27c
$ ./27c
(recursively listing of all files and directories)

============================================================================
*/

