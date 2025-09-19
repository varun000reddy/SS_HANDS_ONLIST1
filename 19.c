/*
============================================================================
Name : 19.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to find out time taken to execute getpid() system call.
Use the Time Stamp Counter (__rdtsc instruction).
Date : 7th Sep, 2025
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<x86intrin.h>
int main()
{
    unsigned long long int  before,after;
    int pid;
    before=__rdtsc();
    pid=getpid();
    after=__rdtsc();
    printf("process id is : %d\n",pid);
    printf("time taken by getpid() is : %llu\n",(after-before));
    return 0;
}
/*
============================================================================
Sample Output:

process id is : 8256
time taken by getpid() is : 61320

============================================================================
*/


