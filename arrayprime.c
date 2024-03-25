#include <stdio.h>

int main() {
    int arr[] = {1};
    int prime = 0;
    int i;
    int j;
    
    for ( i = 0; i < 8; i++) {
        for ( j = 2; j < sqrt(arr[i]); j++) {
            if (arr[i] % j == 0) {
                break;
            }
        }
        if (i > sqrt(arr[i])) {
            prime++;
        }
    }
    
    printf("Number of prime numbers in array: %d\n", prime);
    
    return 0;
}
