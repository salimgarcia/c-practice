/*
Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

Declare variables: two of type int and two of type float.
Read lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your
variables.
Use the and operator to perform the following operations:

1. Print the sum and difference of two int variable on a new line.
2. Print the sum and difference of two float variable rounded to one decimal place on a new line. 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, sum1, dif1;
    float c, d, sum2, dif2;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    
    sum1 = a + b;
    dif1 = a - b;
    
    sum2 = c + d;
    dif2 = c - d;
    
    printf("%d %d\n", sum1, dif1);
    printf("%0.1f %0.1f\n", sum2, dif2);
    
	
    
    return 0;
}
