/* MARTIC NO: 230926  
COURSE: OBJECT ORIENTED PROGRAMMING  
LECTURER: DR. BABATUNDE AYINLA  
QUESTION 10. Write a C programming language that reverses a sentence
*/ 


#include <stdio.h>
void reverse();
int main() {
    printf("Enter your desired sentence: ");
    reverse();
    return 0;
}

void reverse() {
    char letter;
    scanf("%c", &letter);
    if (letter != '\n') {
        reverse();
        printf("%c", letter);
    }
}
