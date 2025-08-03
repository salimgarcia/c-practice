/*Print numbers from 1 to 100, but for multiples of 3 print "Fizz", for 5 print "Buzz", and for both print "FizzBuzz"*/

#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 100; i++) {

        if (i % 3 == 0) {
            
            if (i % 5 == 0) {
                printf("FizzBuzz\n");
            }
            
            else {
                printf("Fizz\n");
            }
        }

        else if (i % 5 == 0) {
            printf("Buzz\n");
        }

        else {
            printf("%d\n", i);
        }

    }
}