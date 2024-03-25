#include <stdio.h>

int main() {
    int arr[] = {3, 1, 5, 7};
    int max = 3;
    
    for (int i = 0; i < 4; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Max element in array: %d\n", max);
    
    return 0;
}
