/*
============================================================================
Name : 2.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a simple program to execute in an infinite loop at the background. 
Go to /proc directory and identify all the process-related information in the 
corresponding /proc/<pid> directory.
Date : 7th Sep, 2025
============================================================================
*/
#include<stdio.h>
int main()
{
  printf("infinte loop is running\n");
  for(;;);
  return 0;
}/*
============================================================================
Sample Output:
(No output on terminal since program runs in background)

When executed in background:
$ ./2 &

You can verify process details under /proc/<pid>, for example:
$ cat /proc/<pid>/status
Name:   2
State:  R (running)
Pid:    4752
...

============================================================================
*/


