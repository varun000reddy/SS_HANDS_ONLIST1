/*
============================================================================
Name : 13.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to wait for STDIN for 10 seconds using select().
Print whether data is available within 10 seconds or not.
Date : 7th Sep, 2025
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/time.h>
int main()
{
   fd_set readfds;
   struct timeval timeout;
   int n;
   FD_ZERO(&readfds);
   FD_SET(0,&readfds);
   timeout.tv_sec=10;
   timeout.tv_usec=0;
   n=select(1,&readfds,NULL,NULL,&timeout);
   if(n<0)perror("error");
   else if(n==0) printf("data not entered within 10 seconds");
   else if(FD_ISSET(0,&readfds)) printf("data entered");
   return 0;
}
/*
============================================================================
Sample Output 1 (no input within 10 seconds):
Data not entered within 10 seconds
Sample Output 2 (input entered within 10 seconds):
itsme
Data entered
============================================================================
*/

