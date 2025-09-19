/*
============================================================================
Name : 1iic.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
(i)Create the following types of files using shell commands:
(ii)system calls:
    c. FIFO (mkfifo system call)
Date : 7th Sep, 2025
============================================================================
*/

/* ----------------- Shell Commands ----------------

# FIFO
mkfifo fifopipe

--------------------------------------------------------------- */
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
  const char *name="fifopipe";
  if(mkfifo(name,0666)==0)
   printf("fifo file is created");
return 0;
}
/*
============================================================================
Sample Output:
FIFO created successfully

(or, if file already exist)

Error: File exists
============================================================================
*/
