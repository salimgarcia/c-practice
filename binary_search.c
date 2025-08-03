#include <stdio.h>

int binary_search(int arr[], int item, int size);

void main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);

    int output = binary_search(array, 11, size);

    if (output == -1) {
        printf("The item does not exist\n");
    }
    else {
        printf("Item is located at index %d\n", output);
    }

}

int binary_search(int arr[], int item, int size) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == item) {
            return mid;
        }
        else if (arr[mid] > item) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return -1;

}

