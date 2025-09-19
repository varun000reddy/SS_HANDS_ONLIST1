/*
============================================================================
Name : 14.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to find the type of a file.
a. Input should be taken from command line.
b. Program should be able to identify any type of a file (regular, directory, 
   character device, block device, FIFO, symbolic link, socket).
Date : 7th Sep, 2025
============================================================================
*/
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
int main(int argc,char *argv[]){
    struct stat filedetect;
    if(argc<2){
        printf("arguments not passed\n");
        return 1;
     }
    if(stat(argv[1],&filedetect)<0){
        perror("stat");
        return 1;
    }
    if(S_ISREG(filedetect.st_mode))
      printf("%s is a Regular File\n",argv[1]);
    else if(S_ISDIR(filedetect.st_mode))
      printf("%s is a Directory\n",argv[1]);
    else if(S_ISCHR(filedetect.st_mode))
      printf("%s is a Character Device\n",argv[1]);
    else if(S_ISBLK(filedetect.st_mode))
      printf("%s is a Block Device\n",argv[1]);
    else if(S_ISFIFO(filedetect.st_mode))
      printf("%s is a FIFO (named pipe)\n",argv[1]);
    else if(S_ISLNK(filedetect.st_mode))
      printf("%s is a Symbolic Link\n",argv[1]);
    else if(S_ISSOCK(filedetect.st_mode))
      printf("%s is a Socket\n",argv[1]);
    else
        printf("%s is of Unknown type\n",argv[1]);
    return 0;
}
/*
============================================================================
Sample Output:

1. Regular file:
$ ./14 thirdfile.txt
thirdfile.txt is a Regular File

2. Directory:
$ ./14 /home
/home is a Directory

3. FIFO:
$ ./14 fifopipe
fifopipe is a FIFO (named pipe)

4. Symbolic Link:
$ ./14 soft
soft is a Symbolic Link

5. Unknown or other types:
$ ./14 sofile
sofile is of Unknown type
============================================================================
*/
