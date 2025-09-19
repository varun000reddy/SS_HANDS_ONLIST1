/*
============================================================================
Name : 6.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to take input from STDIN and display it on STDOUT. 
Use only read/write system calls.
Date : 7th Sep, 2025
============================================================================
*/

#include<unistd.h>
int main()
{
  char storage[100];
  ssize_t bytes_read;
  
  bytes_read=read(STDIN_FILENO,storage,sizeof(storage));
  if(bytes_read>0)
  { 
    write(STDOUT_FILENO,storage,sizeof(storage));
  }
  return 0;
}
/*
============================================================================
Sample Output:
ITSME
ITSME

(Whatever we type will be echoed back using read/write syscalls)
============================================================================
*/
