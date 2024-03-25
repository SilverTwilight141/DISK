#include <stdio.h>
int main() {
   int array[6][6];
   int i, j;
   
    for (i = 5; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
      	array[i][j] = j;
      }
  }
   for (i = 5; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("%d \t", array[i][j]);
      }
      printf("\n");
   }
   return 0;
}


