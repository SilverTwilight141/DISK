#include <stdio.h>

int main() {
    int arr[] = {3, 5, 7, 11};
    int max = 5;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= max; j++) {
            if (arr[i] % j == 0) {
                printf("Element %d is divisible by %d\n", i + 1, j);
                break;
            }
        }
    }
    
    return 0;
}
