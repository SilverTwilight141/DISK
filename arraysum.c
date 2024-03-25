#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3};
    int sum = 0;
    
    for (int i = 0; i < 3; i++) {
        sum += arr[i];
        printf("Sum of numbers in array: %d\n", sum);
    }
    
    return 0;
}
