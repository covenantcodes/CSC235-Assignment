/* MARTIC NO: 230926  
COURSE: OBJECT ORIENTED PROGRAMMING  
LECTURER: DR. BABATUNDE AYINLA  
QUESTION 9. Write a C program to count 1-N 
*/ 
#include <stdio.h>

int main()
{
    int i;
  
    // Declare variable to hold number of names
    int n = 10;
    // Declaration of 2-D char array
    char array[n][20];
   // Initialization of 2-D char array
   printf("Enter the names: \n");
    for (i = 0; i < 10; i++)
        scanf("%s", array[i]);
    // print the words
   printf("These are the names you entered: \n");
    for (i = 0; i < 10; i++)
        printf("%s\n", array[i]);
  
    return 0;
}