/*
============================================================================
Name : 10.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to open a file with read/write mode, write 10 bytes, 
move the file pointer by 10 bytes (using lseek), and write again 10 bytes.
Check the return value of lseek and verify the empty spaces in the file.
Date : 7th Sep, 2025
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=open("thirdfile.txt",0666);
    if(fd==-1)
    {
     perror("open");
     return 1;
    }
    write(fd,"iamvaruncj",10);
    off_t pos=lseek(fd,10,SEEK_CUR);
    if(pos==-1)
    {
     perror("lseek");
     return 1;
    }
    printf("new offset : %ld\n",(long)pos);
    write(fd,"iammovedas",10);
    close(fd);
    return 0;
}
/*
============================================================================
Sample Output:
check the contents of thirdfile.txt

$ od -c thirdfile.txt
0000000   i   a   m   v   a   r   u   n   c   j  \0  \0  \0  \0  \0  \0
0000020   i   a   m   m   o   v   e   d   a   s
0000032
(The \0 bytes indicate the 10-byte gap created by lseek)
============================================================================
*/

