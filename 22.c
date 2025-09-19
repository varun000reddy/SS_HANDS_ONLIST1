/*
============================================================================
Name : 22.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to open a file, call fork(), and then write to the file by both 
the child as well as the parent processes. Check output of the file.
Date : 7th Sep, 2025
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=open("firstfile.text",O_WRONLY);
    int pid=fork();
    if(pid==0)
     {
      char *msg="this is child";
      write(fd,msg,14);
     }
    else
    {
     char *msg1="this is parent";
     write(fd,msg1,15);
    }
    close(fd);
    return 0;
}

/*
============================================================================
Sample Output:

$ gcc 22.c -o 22
$ ./22

$ cat firstfile.text
this is child
this is parent

============================================================================
*/

