/*  MATRIC NO: 230926 
COURSE: OBJECT ORIENTED PROGRAMMING 
LECTURER: DR. BABATUNDE AYINLA 
QUESTION  8.	Write a program in C to say Hello World to your lecturer
*/

#include <stdio.h>
char name[30];
int main (){
            printf("Please enter your name: ");  //Print Statement
            fgets(name, 30, stdin);
            printf("Hello World %s", name);
            return 0;
}