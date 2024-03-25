
#include <stdio.h>
int main(){
int array [5][5];	

{
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++)
			array[i][j] = j;
	}
	
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++)
			printf("%d \t", array[i][j]);
		printf("\n");
	}

	
	for (int i = 4; i > 0; i--) {
		for (int j = i; j <= i; j++)
			printf("%d \t", array[i][j]);
		printf("\n");
	}
}



	return 0;
}


