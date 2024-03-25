#include <stdio.h>
 int main(){
 	int array[5];
 	int i;
 	
 	printf("Enter 5 Numbers:\n");
 	 for (i = 0; i < 5; i++){
 	 
 	scanf("%d",&array[i]);
 	printf("\n",array[i]);
 } 
 for (i = 0; i < 5; i++){
 		if(i == 5 && i == 4){
 	 		printf("True");
		  }else{
		  	printf("False");
		  }

 }
 	return 0;
 }
