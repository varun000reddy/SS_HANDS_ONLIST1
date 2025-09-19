/*
============================================================================
Name : 27e.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : Execute "ls -RL" using execvp() system call.
Date : 7th Sep, 2025
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
  char *argv[]={"ls","-Rl",NULL};
  printf("i am recursively listing every file and directory\n");
  execvp(argv[0],argv);
  return 0;
}
/*
============================================================================
Sample Output:

$ gcc 27e.c -o 27e
$ ./27e
i am recursively listing every file and directory

============================================================================
*/

