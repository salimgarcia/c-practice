/*
Task: For each integer in 'n' the interval [a, b] (given as input) :

- If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
- Else if n > 9 and it is an even number, then print "even".
- Else if n > 9and it is an odd number, then print "odd".
*/

#include <stdio.h>

char numbers[9][100] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()  {

    int a, b;
    scanf("%d\n%d", &a, &b);

    for(int i = a; i <= b; i++) {
        if (1 <= i && i <= 9) {

            printf("%s\n", numbers[i - 1]);
        }
        else if (i % 2 == 0) {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }

    return 0;
}

