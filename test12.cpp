#include <stdio.h>
int main(){
	int array[5];
	int i,n;
	
	
	printf("Enter 5 Numbers:\n");
	
	for(i=0;i<5;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<5;i++){
		printf("Enter the Variable:");
		scanf("%d",&n);
	}
    printf("the Number You want in the array:%d",&array[i]);

    return 0;
}
    	
