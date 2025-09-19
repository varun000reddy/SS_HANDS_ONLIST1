/*
============================================================================
Name : 1iib.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
(i)Create the following types of files using shell commands:
(ii)system calls:
    b. Hard link (link system call)
Date : 7th Sep, 2025
============================================================================
*/

/* ----------------- Shell Commands ----------------

# Hard link
ln linkingfile.txt hardlink

--------------------------------------------------------------- */
#include<unistd.h>
#include<stdio.h>
int main()
{
  const char *original="linkingfile.txt";
  const char *target="hardlink";
  if(link(original,target)==0)
   {
     printf("new hardlink file is created\n");
   }return 0;
}
/*
============================================================================
Sample Output:
Hard link created successfully

(or, if file already exist)

Error: File exists
============================================================================
*/

