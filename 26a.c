/*
============================================================================
Name : 26a.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to execute an executable program.
(a) Use execl() to execute another executable program.
Date : 7th Sep, 2025
============================================================================
*/

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("i am executing a executable file\n");
  execl("/bin/ls","ls",NULL);
  printf(" i am not executing if i execute then that means execl function call is failed\n");
  return 0;
}
/*
============================================================================
Sample Output:

$ gcc 26a.c -o 26a
$ ./26a
i am executing a executable file
============================================================================
*/
