#include <stdio.h>
int main()
{
int array [6][6];
int i,j;

for(i = 1; i <= 5; i++) {
	for (j = 1; j <= i; j++) {
		array[j][j] = j;
	}
}	
	for (i = 1; i <= 5; i++) {
	  for (j = 1; j <= i; j++) {
	  	printf ("%d \t", array[j][j]);
	  }
	  printf("\n");
}
	
	return 0;
}
