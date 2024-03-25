#include <stdio.h>
int main() {
	int array[5][5];
   int i,j;
   int a = 0;
   for (i = 4; i >= 0; i--) {
      for (j = 0; j <= i; j++) {
      	array[i][j] = a+=2;
      }
}
 for (i = 4; i >= 0; i--) {
      for (j = 0; j <= i; j++) {
         printf("%d\t ", array[i][j]);
      }
      printf("\n");
   }
   return 0;
}

