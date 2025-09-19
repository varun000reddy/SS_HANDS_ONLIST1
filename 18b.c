/*
============================================================================
Name : 18b.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to perform Record locking.
Part (b): Implement write lock. 
Create three records in a file (done in 18a.c). Whenever a user accesses a
particular record, first lock that record, then modify the ticket count,
and finally release the lock to avoid race condition.
Date : 7th Sep, 2025
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(void){
	int fd,input;
	struct{
		int train_no;
		int tkt_count;
	}tkt;
	fd=open("records.txt",O_RDWR);
	printf("Select train number : \n");
	scanf("%d",&input);
	struct flock lock;
	lock.l_type=F_WRLCK;
	lock.l_whence=SEEK_SET;
	lock.l_start=(input-1)*sizeof(tkt);
	lock.l_len=sizeof(tkt);
	lock.l_pid=getpid();
	lseek(fd,(input-1)*sizeof(tkt),SEEK_SET);
	read(fd,&tkt,sizeof(tkt));
	printf("before entering CS \n");
	fcntl(fd,F_SETLKW,&lock);
	printf("In CS\n");
	printf("Train number entered %d \n",tkt.train_no);
	printf("Initial ticket count %d \n",tkt.tkt_count);
	tkt.tkt_count++;
	printf("New ticket count will be %d \n",tkt.tkt_count);
	lseek(fd,-1*sizeof(tkt),SEEK_CUR);
	write(fd,&tkt,sizeof(tkt));
	printf("To book the ticket press Enter \n");
	getchar();
	getchar();
	lock.l_type=F_UNLCK;
	fcntl(fd,F_SETLK,&lock);
}
/*
============================================================================
Sample Output:
./18b

Select train number : 
1
before entering CS 
In CS
Train number entered 1 
Initial ticket count 0 
New ticket count will be 1 
To book the ticket press Enter 

./18b

Select train number : 
1
before entering CS 
In CS
Train number entered 1 
Initial ticket count 1 
New ticket count will be 2 
To book the ticket press Enter 
============================================================================
*/
