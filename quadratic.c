/* MARTIC NO: 230926  
COURSE: OBJECT ORIENTED PROGRAMMING  
LECTURER: DR. BABATUNDE AYINLA  
QUESTION 12. Write a program in C to solve a simple quadratic equation (x2+y+c=0). 
Your program you allow the use of any number as the coefficient of any of the variable.
*/ 
#include <stdio.h>
#include <math.h> 

int main (){
    // Variable Declarations
    float  a;
    float  b;
    float  c;
    float  x1;
    float x2;
    float x_part;
    float denom;

    // Accepting User Input 
    printf("Enter the values of a,b,c equivalent ");
    scanf("%f%f%f", &a, &b, &c);

    x_part = sqrt(b * b - 4 * a * c);
    denom = 2 * a;

    x1 = (-b + x_part) / denom;
    x2 = (b - x_part) / denom;
    printf("X = %f or X = %f \n", x1, x2);

    return 0;
}