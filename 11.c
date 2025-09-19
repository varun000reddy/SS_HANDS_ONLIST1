/*
============================================================================
Name : 11.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to open a file, duplicate the file descriptor and append 
to the file using all descriptors. Demonstrates:
a. dup
b. dup2
c. fcntl (F_DUPFD)
Date : 7th Sep, 2025
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=open("auxifile.txt",O_WRONLY|O_CREAT|O_APPEND,0644);
    int fd1=dup(fd);
    int fd2=dup2(fd,10);
    int fd3=fcntl(fd,F_DUPFD,0);
    write(fd,"thisisfd",8);
    write(fd1,"thisisdup",9);
    write(fd2,"thisisdup2",10);
    write(fd3,"thisisfcntl",11);
    printf("%d %d %d %d",fd,fd1,fd2,fd3);
    close(fd);
    close(fd1);
    close(fd2);
    close(fd3);
    return 0;
}
/*
============================================================================
Sample Output:
3 4 10 5
============================================================================
*/
