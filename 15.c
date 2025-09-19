/*
============================================================================
Name : 15.c
Author : CHINTHA JOGGARI VARUN REDDY
Description : 
Write a program to display all environmental variables of the user using 'environ'.
Date : 7th Sep, 2025
============================================================================
*/
#include<stdio.h>
extern char **environ;
int main(){
    int i=0;
    while(environ[i]!=NULL)
    {
      printf("%s\n",environ[i]);
      i++;
    }
    return 0;
}

/*
============================================================================
Sample Output:

SHELL=/bin/bash
SESSION_MANAGER=local/varun-HP-Laptop-14s-dr5xxx:@/tmp/.ICE-unix/2289,unix/sivani-reddy-HP-Laptop-14s-dr5xxx:/tmp/.ICE-unix/2289
QT_ACCESSIBILITY=1
COLORTERM=truecolor
XDG_CONFIG_DIRS=/etc/xdg/xdg-ubuntu:/etc/xdg
XDG_MENU_PREFIX=gnome-
GNOME_DESKTOP_SESSION_ID=this-is-deprecated
GNOME_KEYRING_CONTROL=/run/user/1000/keyring
GNOME_SHELL_SESSION_MODE=ubuntu
SSH_AUTH_SOCK=/run/user/1000/keyring/ssh
MEMORY_PRESSURE_WRITE=c29tZSAyMDAwMDAgMjAwMDAwMAA=
XMODIFIERS=@im=ibus
DESKTOP_SESSION=ubuntu
GTK_MODULES=gail:atk-bridge....
....
(All environmental variables of the current session will be printed)
============================================================================
*/


