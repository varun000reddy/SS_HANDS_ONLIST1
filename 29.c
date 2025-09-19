/*
============================================================================
Name : 29.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to get the current scheduling policy of the process and 
modify it to a real-time scheduling policy (SCHED_FIFO) with a given priority.
Date : 7th Sep, 2025
============================================================================
*/
#include <stdio.h>
#include <sched.h>
#include <unistd.h>
int main()
{
    int policy;
    struct sched_param para;
    policy=sched_getscheduler(0);
    printf("Current policy: ");
    if(policy==SCHED_OTHER)
    printf("SCHED_OTHER\n");
    else if(policy==SCHED_FIFO)
    printf("SCHED_FIFO\n");
    else if(policy==SCHED_RR)
    printf("SCHED_RR\n");
    else 
    printf("Unknown\n");
    para.sched_priority = 35;
    if(sched_setscheduler(0,SCHED_FIFO,&para)==-1)
     {
        perror("sched_setscheduler failed");
     }
     else{
        printf("Changed policy to SCHED_FIFO with priority %d\n", para.sched_priority);
     }
    policy=sched_getscheduler(0);
    printf("New policy: ");
    if(policy==SCHED_OTHER)
    printf("SCHED_OTHER\n");
    else if(policy==SCHED_FIFO)
    printf("SCHED_FIFO\n");
    else if(policy==SCHED_RR)
    printf("SCHED_RR\n");
    else
    printf("Unknown\n");
    return 0;
}
/*
============================================================================
execute ./a.out in sudo
Sample Output:

Current policy: SCHED_OTHER
Changed policy to SCHED_FIFO with priority 35
New policy: SCHED_FIFO

============================================================================
*/
