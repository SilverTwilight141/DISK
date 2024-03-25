#include <stdio.h>
int main(){

	int arraysize[10],i;
	printf("Enter 10 Numbers:\n");
	
 for (i = 0; i < 10; i++)
 	scanf("%d",&arraysize[i]);
 	printf("\nThe Odd Num are:\n");
 for  (i = 0; i < 10; i++){
 	if (arraysize[i]%2!=0){
 		printf("%d\n",arraysize[i]);	
 	}
	 }
 return 0;
}

