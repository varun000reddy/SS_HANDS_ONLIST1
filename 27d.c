/*
============================================================================
Name : 27d.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : Execute "ls -RL" using execv() system call.
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
   execv("/bin/ls",argv);
   return 0;
}
/*
============================================================================
Sample Output:

$ gcc 27d.c -o 27d
$ ./27d
i am recursively listing every file and directory

============================================================================
*/

