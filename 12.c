/*
============================================================================
Name : 12.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to find out the opening mode of a file using fcntl system call.
Date : 7th Sep, 2025
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=open("auxifile.txt",O_RDWR|O_CREAT,0644);
    int status=fcntl(fd,F_GETFL);
    int mode=status&O_ACCMODE;
    if(mode==O_RDONLY)
      printf("opened in read only mode\n");
    else if(mode==O_WRONLY)
      printf("opened in write only mode\n");
    else if(mode==O_RDWR)
     printf("opened in read and write mode\n");
    else
     printf("unknown mode");
    close(fd);
    return 0;
}
/*
============================================================================
Sample Output:
opened in read and write mode
============================================================================
*/

