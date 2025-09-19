/*
============================================================================
Name : 17b.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Program to simulate online ticket reservation.
Part (b): Open the ticket file, implement write lock, read the ticket number, 
increment it, print the new ticket number, update the file, then release the lock.
Date : 7th Sep, 2025
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd,ticket;
    struct flock lock;
    fd=open("tkt.txt",O_RDWR);
    if(fd<0){
        perror("open");
        return 1;
    }
    lock.l_type = F_WRLCK;
    lock.l_whence = SEEK_SET;
    lock.l_start = 0;
    lock.l_len = 0;
    printf("Trying to acquire write lock...\n");
    if(fcntl(fd,F_SETLKW,&lock)==-1){
        perror("fcntl");
        return 1;
    }
    lseek(fd, 0, SEEK_SET);
    read(fd,&ticket,sizeof(ticket));
    printf("Current ticket: %d\n",ticket);
    ticket++;
    printf("New ticket issued: %d\n",ticket);
    lseek(fd,0,SEEK_SET);
    write(fd,&ticket,sizeof(ticket));
    lock.l_type=F_UNLCK;
    fcntl(fd,F_SETLK,&lock);
    close(fd);
    return 0;
}
/*
============================================================================
Sample Output:
$ gcc 17b.c -o 17b
$ ./17b
Trying to acquire write lock...
Current ticket: 25
New ticket issued: 26

$ ./17b
Trying to acquire write lock...
Current ticket: 26
New ticket issued: 27
============================================================================
*/
