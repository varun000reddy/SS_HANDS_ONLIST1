/*
============================================================================
Name : 16a.c
Author : CHNITHA JOGGARI VARUN REDDY
Description : 
Write a program to perform mandatory locking.
a. Implement write lock using fcntl.
Date : 7th Sep, 2025
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd;
    struct flock lock;
    fd=open("lockingfile.txt",O_RDWR|O_CREAT,0644);
    if(fd<0){
        perror("open");
        return 1;
    }
    lock.l_type = F_WRLCK;
    lock.l_whence = SEEK_SET;
    lock.l_start = 0;
    lock.l_len = 0;
    printf("to execute write lock\n");
    if(fcntl(fd,F_SETLKW,&lock)==-1){
        perror("fcntl");
        return 1;
    }
    printf("enter to release the write lock\n");
    getchar();
    lock.l_type=F_UNLCK;
    fcntl(fd,F_SETLK,&lock);
    printf("Lock released\n");
    close(fd);
    return 0;
}
/*
============================================================================
Sample Output:
to execute write lock
enter to release the write lock

(After pressing Enter)
Lock released
============================================================================
*/

