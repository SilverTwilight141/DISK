#include <stdio.h>
 int main(){
 	int array[6];
 	int i;
 	int sum = 0;
 	
 	printf("Enter 6 Numbers:\n");
 	 for (i = 0; i < 6; i++){
 	scanf("%d",&array[i]);
 } 
 for (i = 0; i < 6;i++){
 		if(array[i] == 3){
 	 		sum += array[i];
 	 	}
 	 }
		if(sum == 12){
			printf("true");
		}else{
			printf("false");
		}
	

 	return 0;
 }
