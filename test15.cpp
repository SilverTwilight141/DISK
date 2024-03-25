#include<stdio.h>
int main(){
    int numbers[3][3];
    int i;
    int j;
    
    printf("Enter the Numbers of arrays:",i,j);
    
for(int i = 0; i < 3; i++){
for (int j = 0; j < 3; j++){
printf("Enter the Number of Array[%d][%d]:",i,j);
scanf("%d",&numbers[i][j]);
}
}
for(int i = 0; i < 3; i++){
for (int j = 0; j < 3; j++){
	printf("%d",numbers[i][j]);
}
printf("\n");
}

return 0;
}
