/*
============================================================================
Name : 8.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to open a file in read-only mode, read line by line 
and display each line as it is read. Close the file when end of file is reached.
Date : 7th Sep, 2025
============================================================================
*/
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd;
	int i=0;
	fd=open("2.c",O_RDONLY);
	char buffer[100];
	ssize_t n;
	while((n=read(fd,&buffer[i],1))>0)
	{
		if(buffer[i]=='\n')
		{
			buffer[i]='\0';
			getchar();
			write(1,buffer,i);
			write(1,"\n",1);
			i=0;
		}
                else
                {
		i++;
                }
		if(i>=sizeof(buffer)-1)
		{
			buffer[i]='\0';
			break;
		}
	}
	return 0;
}
/*
============================================================================
Sample Output:

contents of file 2.c

============================================================================
*/

