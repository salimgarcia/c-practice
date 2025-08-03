/*Copy input to output and replace each string of one or more blanks with a single blank*/

#include <stdio.h>

int main() {
    int c, lastc;

    while ((c = getchar()) != EOF) {
        if (c == ' ' && lastc == ' ') {
            continue;
        }

        putchar(c);
        lastc = c;
    }
}