/*
============================================================================
Name : 28.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : Write a program to get maximum and minimum real-time priority
for different scheduling policies (SCHED_FIFO, SCHED_RR, SCHED_OTHER).
Date : 7th Sep, 2025
============================================================================
*/
#include<stdio.h>
#include<sched.h>
int main()
{
    int min,max;
    min=sched_get_priority_min(SCHED_FIFO);
    max=sched_get_priority_max(SCHED_FIFO);
    printf("SCHED_FIFO : min is %d , max is %d\n",min,max);
    min=sched_get_priority_min(SCHED_RR);
    max=sched_get_priority_max(SCHED_RR);
    printf("SCHED_RR : min is %d , max is %d\n",min,max);
    min=sched_get_priority_min(SCHED_OTHER);
    max=sched_get_priority_max(SCHED_OTHER);
    printf("SCHED_OTHER : min is %d , max is %d\n",min,max);
    return 0;
}

/*
============================================================================
Sample Output:

SCHED_FIFO  : min = 1, max = 99
SCHED_RR    : min = 1, max = 99
SCHED_OTHER : min = 0, max = 0

============================================================================
*/



