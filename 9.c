/*
============================================================================
Name : 9.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to print the following information about a given file:
a. inode
b. number of hard links
c. uid
d. gid
e. size
f. block size
g. number of blocks
h. time of last access
i. time of last modification
j. time of last change
Date : 6th Sep, 2025
============================================================================
*/#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<time.h>
int main()
{
    struct stat s;
    if(stat("2.c",&s)==-1)
     {
      perror("stat");
      return 1;
     }
    printf("inode number : %ld\n",(long)s.st_ino);
    printf("hard links : %ld\n",(long)s.st_nlink);
    printf("uid : %d\n",s.st_uid);
    printf("gid : %d\n",s.st_gid);
    printf("size : %ld  bytes\n",(long)s.st_size);
    printf("blocks : %ld\n",(long)s.st_blocks);
    printf("access time : %s", ctime(&s.st_atime));
    printf("modification time: %s", ctime(&s.st_mtime));
    printf("change time : %s", ctime(&s.st_ctime));
    return 0;
}
/*
============================================================================
Sample Output:

inode number : 4981212
hard links : 1
uid : 1000
gid : 1000
size : 937  bytes
blocks : 8
access time : Sat Sep  7 16:51:05 2025
modification time: Sat Sep  7 16:51:05 2025
change time : Sat Sep  7 16:51:05 2025

============================================================================
*/
