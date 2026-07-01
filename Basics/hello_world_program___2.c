#include <stdio.h> //this is a preproccesor directory
int main()         // this is a starting point of the program
{
      clrscr();   /*Attempts to clear the screen.
Note:::clrscr() is not part of standard C; 
it works only in some older compilers like Turbo C.*/
    printf("Hello world"); // here hello world which will be printed and will be available on the out put
    getch();               /* this is the end point of the program ((1. This pauses execution until a key is pressed.))
                                                                  ((2.  It is not part of standard C and usually works
                                                                  only in some compilers/environments
                                                                  (like old Turbo C or some Windows-specific setups).)  */
}
// getch() used specifically only in (like old Turbo C or some Windows-specific setup).