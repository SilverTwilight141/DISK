#include <stdio.h>

int main() {
    int arr[] = {1, 2, 1, 4, 1};
    int same = 0;
    
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                same++;
            }
        }
    }
    
    printf("Number of same variables: %d\n", same);
    
    return 0;
}
