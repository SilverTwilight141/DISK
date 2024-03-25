#include <stdio.h>
int main() {
	int array[4][4];
   int i,j;
   int a = 0;
   for (i = 4; i >= 1; i--) {
      for (j = 0; j <= i; j++) {
      	array[i][j] = a += 1;
    }
 }
   for (i = 4; i >= 1; i--) {
      for (j = 0; j <= i; j++) {
      	printf("%d ",array[i][j]);
		  }
		  printf("\n");
}
   return 0;
}

