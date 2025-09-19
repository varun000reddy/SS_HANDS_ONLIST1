/*
============================================================================
Name : 5.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to create five new files and then go into an infinite loop. 
Execute the program in the background and check the file descriptor table 
at /proc/<pid>/fd.
Date : 7th Sep, 2025
============================================================================
*/

#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
  int n=0;
  for(;;)
  {
   if(n==0){
    creat("firstfile.txt",0644);
    n++;
    continue;
   }
   if(n==1)
   {
    creat("secondfile.txt",0644);
    n++;
    continue;
   }
   if(n==2)
   {
    creat("thirdfile.txt",0644);
    n++;
    continue;
   }
   if(n==3)
   { 
    creat("fourthfile.txt",0644);
    n++;
    continue;
   }
   if(n==4)
    {
     creat("fifthfile.txt",0644);
     n++;
     continue;
    }
   
  }
   return 0;
}
/*
============================================================================
Sample Output:
(No output on terminal since program runs in background)

When executed in background:
$ ./5 &


check in ls -l /proc/<pid>
pid=5016


Sample Result:
lrwx------ 1 user user 64 Sep  7 16:10 0 -> /dev/pts/0
lrwx------ 1 user user 64 Sep  7 16:10 1 -> /dev/pts/0
lrwx------ 1 user user 64 Sep  7 16:10 2 -> /dev/pts/0
lrwx------ 1 user user 64 Sep  7 16:10 3 -> /home/user/firstfile.txt
lrwx------ 1 user user 64 Sep  7 16:10 4 -> /home/user/secondfile.txt
lrwx------ 1 user user 64 Sep  7 16:10 5 -> /home/user/thirdfile.txt
lrwx------ 1 user user 64 Sep  7 16:10 6 -> /home/user/fourthfile.txt
lrwx------ 1 user user 64 Sep  7 16:10 7 -> /home/user/fifthfile.txt

============================================================================
*/
