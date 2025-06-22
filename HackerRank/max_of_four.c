/*
Task: Write a function int max_of_four(int a, int b, int c, int d) 
which reads four arguments and returns the greatest of them.
*/

#include <stdio.h>

int max(int x, int y) {
    int max;
    if (x > y) {
        max = x;
    }
    else {
        max = y;
    }

    return max;
}

int max_of_four(int a, int b, int c, int d) {
    int top;
    top = max(a, b);
    top = max(top, c);
    top = max(top, d);
    return top;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}