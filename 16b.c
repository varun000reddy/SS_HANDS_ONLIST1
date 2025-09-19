/*
============================================================================
Name : 16b.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to perform mandatory locking.
b. Implement read lock using fcntl.
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
    fd=open("lockingfile.txt",O_RDONLY);
    if(fd<0){
        perror("open");
        return 1;
    }
    lock.l_type = F_RDLCK;
    lock.l_whence = SEEK_SET;
    lock.l_start = 0;
    lock.l_len = 0;
    printf("to execute the read lock\n");
    if(fcntl(fd,F_SETLKW,&lock)==-1){
        perror("fcntl");
        return 1;
    }
    printf("press something to release read lock\n");
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
to execute the read lock
press something to release read lock

(After pressing Enter)
Lock released
============================================================================
*/
