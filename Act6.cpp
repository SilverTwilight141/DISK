#include <stdio.h>
 int main(){
 	int array[4],i;
 	
 	printf("Enter 5 Numbers:\n");
 	 for (i = 0; i <= 4; i++){
 	scanf("%d",&array[i]);
 } 
 for (i = 0; i <= 4;i++){
 		if(i % 10 == 4 && i % 10 == 5){
 	 		printf("True");
 	 		return 0;
 	 	}
 	 }
		  
		  	printf("False");
		  

 	return 0;
 }
