/* Program that copies its input to its output one character at a time */

#include <stdio.h>

int main() {
    
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}