/*
============================================================================
Name : 7.c
Author : CHINTHA JOGGARI VARUN  REDDY
Description : 
Write a program to copy file1 into file2 (similar to $cp file1 file2).
Use open, read, write, and close system calls.
Date : 7th Sep, 2025
============================================================================
*/

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{  int fd1,fd2;
   fd1=open("copyfile.txt",O_RDONLY);
    fd2=open("dupfile.txt",O_WRONLY|O_CREAT,0644);
    ssize_t bytes_read,bytes_write;
    char buffer[1024];
    bytes_read= read(fd1,buff,sizeof(buff));
    write(fd2,buff,bytes_read);
    close(fd1);
    close(fd2);
    printf("copy successful");
   return 0;
}
/*
============================================================================
Sample Output:
contents of dupfile.txt will be identical to copyfile.txt
============================================================================
*/
