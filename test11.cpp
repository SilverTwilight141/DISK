#include <stdio.h>
int main(){
	int array[5];
	int i;
	int max = 0;
	
	printf("Enter 5 Numbers:\n");
	
	for(i=0;i<5;i++){
		scanf("%d",&array[i]);
	}
	
    for(i=0;i<5;i++){
    	 if (array[i] > max) {
            max = array[i];
		}
    }
    
     printf("Max element in array: %d\n", max);
     
     return 0;
 }
