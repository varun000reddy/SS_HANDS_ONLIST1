/*
============================================================================
Name : 1iia.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
(i)Create the following types of files using shell commands:
(ii)system calls:
    a. Soft link (symlink system call)
Date : 7th Sep, 2025
============================================================================
*/

/* ----------------- Shell Commands -----------------

# Soft link
ln -s linkingfile.txt soft

--------------------------------------------------------------- */
#include<unistd.h>
#include<stdio.h>
int main()
{  
   const char *file="linkingfile.txt";
   const char *newlink="soft";
   if(symlink(file,newlink)==0)
   {
     printf("softlink file is created\n");
   }
return 0;
}
/*
============================================================================
Sample Output:
Soft link created successfully

(or, if file already exist)
Error: File exists

============================================================================
*/
