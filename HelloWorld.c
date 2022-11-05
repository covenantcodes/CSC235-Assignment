/*  MATRIC NO: 230926 
COURSE: OBJECT ORIENTED PROGRAMMING 
LECTURER: DR. BABATUNDE AYINLA 
QUESTION  8.	Write a program in C to say Hello World to your lecturer
*/

// #include <stdio.h>
// int main (){
//             printf("Hello World\n");  //Print Statement
//             return 0;
// }

#include<stdio.h>
 
int main() {
   char inputString[128];
  
   printf("Enter a multi line string( press ';' to end input)\n");
   scanf("%[^;]s", inputString);
  
   printf("Input String = %s", inputString);
  
   return 0;
}