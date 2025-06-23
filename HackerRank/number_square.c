#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int dimension = 2 * n - 1;
    int row;
    int col;
    
    for (row = 0; row < dimension; row++) {
        
        for (col = 0; col < dimension; col++) {
            int q = dimension - 1 - row;
            int r = dimension - 1 - col;
            
            int values[] = {row, col, q, r};
            int min = values[0];
            
            for (int i = 1; i < 4; i++) {
                if (values[i] < min) {
                    min = values[i];
                }
            }   
            int index = abs(min - n);
            printf("%d ", index);
        }
        printf("\n");
    }
    
    return 0;
}
