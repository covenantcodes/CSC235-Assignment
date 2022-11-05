/* MARTIC NO: 230926  
COURSE: OBJECT ORIENTED PROGRAMMING  
LECTURER: DR. BABATUNDE AYINLA  
QUESTION 10. Write a C program to count 1-N 
*/ 

#include <stdio.h>
int main(){
    int number;
    printf("Enter the upper limit number: ");
    scanf("%d", &number);
    for(int count=1; count <= number; count++){
        printf("%d\n", count);
    }
    return 0;
}
