/*
============================================================================
Name : 26b.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to execute an executable program.
(b) Pass some input to an executable program (for example execute $./a.out name).
Date : 7th Sep, 2025
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
  printf("i am passing input to the executable file\n");
  execlp("ls","ls","-l",NULL);
  printf("i will not execute because the executable function call replace its image \n");
  return 0;
}
/*
============================================================================
Sample Output:
i am passing input to the executable file
============================================================================
*/
