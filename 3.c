/*
============================================================================
Name : 3.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to create a file and print the file descriptor value. 
Use creat() system call.
Date : 7th Sep, 2025
============================================================================
*/
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
  const char *path="/home/varun/var/creatingfile.txt";
  int fd;
  fd=creat(path,0764);
  printf("the value of the file discriptor is %d",fd);
  return 0;
}
/*
============================================================================
Sample Output:
File descriptor is 3

(Here, the actual number may vary, e.g., 3, 4, etc., 
depending on already open files in the process.)
A new file "creatingfile.txt" will also be created with permissions rwx-rw-r-- (0764).
============================================================================
*/
