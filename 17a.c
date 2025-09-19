/*
============================================================================
Name : 17a.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Program to simulate online ticket reservation.
Part (a): Open a file, store an initial ticket number and exit.
Date : 7th Sep, 2025
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd;
    int ticket=25;
    fd=open("tkt.txt",O_RDWR|O_CREAT|O_TRUNC,0644);
    if(fd<0){
        perror("open");
        return 1;
    }
    write(fd,&ticket,sizeof(ticket));
    printf("Initialized ticket number: %d\n",ticket);
    close(fd);
    return 0;
}
/*
============================================================================
Sample Output:
Initialized ticket number: 25
============================================================================
*/
