#include <stdio.h>
int main (){
	int array[5][5];
	int i;
	int j;
	int a = 100;
	
	for(i=1;i<4;i++){
		for(j=1;j<=i;j++){
			array[i][j] += a;
		}
	}


  for(i=1;i<4;i++){
		for(j=1;j<=i;j++){
			printf("%d \t",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
