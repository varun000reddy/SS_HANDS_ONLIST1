/*
============================================================================
Name : 18a.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to perform Record locking.
Part (a): Create three records in a file. Each record contains:
          - train number
          - ticket count
Initialize the records and write them to a file.
Date : 7th Sep, 2025
============================================================================
*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(void)
{
	int i,fd;
	struct{
		int train_no;
		int tkt_count;
	}tkt[3];
	for(i=0;i<3;i++){
		tkt[i].train_no=i+1;
		tkt[i].tkt_count=0;
	}
	fd=open("records.txt",O_RDWR|O_CREAT,0744);
	write(fd,tkt,sizeof(tkt));
	close(fd);
}
/*
============================================================================
Sample Output:
nothing on the screen but ,
initialized 3 train records in records.txt


============================================================================
*/

