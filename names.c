/* MARTIC NO: 230926  
COURSE: OBJECT ORIENTED PROGRAMMING  
LECTURER: DR. BABATUNDE AYINLA  
QUESTION 10. Write a C program to count 1-N 
*/ 
#include <stdio.h>
int main () {
   char names[128];
   printf ("Enter the names of ten when done end the program with ';' \n");
   scanf("%[^;]s", &names);
   printf("Here are the names you entered %s \n", names);
}