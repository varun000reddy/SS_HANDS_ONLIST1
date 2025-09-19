/*
============================================================================
Name : 4.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to open an existing file with read write mode. 
Also try O_EXCL flag while creating a new file.
Date : 7th Sep, 2025
============================================================================
*/

#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{
  const char *file="creatingfile.txt";
  int fd,fd1;
  fd1=open("linkingfile.txt",O_RDONLY);
  printf("file descriptor is %d\n",fd);
  fd=open(file,O_RDWR|O_EXCL);
  if(fd>0)
   {
    printf("file descriptor is %d",fd1);
   }
   return 0;
}
/*
============================================================================
Sample Output (Case 1: creatingfile.txt does not exist):
File descriptor for linkingfile.txt is 3
File descriptor for creatingfile.txt is 4

Sample Output (Case 2: creatingfile.txt already exists):
File descriptor for linkingfile.txt is 3
Error creating ex.txt with O_EXCL: File exists
============================================================================
*/

