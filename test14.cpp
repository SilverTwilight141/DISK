#include<stdio.h>
int main(){
	int row;
	int column;
    int numbers[3][3];
    int i;
    int j;
    
    printf("Enter the Numbers of rows:");
    scanf("%d",&row);
    printf("Enter the Numbers of Columns:");
    scanf("%d",&column);
    printf("Enter the Numbers of arrays:");
    
for(int i = 0; i < row; i++){
for (int j = 0; j < column; j++){
printf("Enter the Number of Array[%d][%d]:",i,j);
scanf("%d",&numbers[i][j]);
}
}
for(int i = 0; i < row; i++){
for (int j = 0; j < column; j++){
	printf("%d",numbers[i][j]);
}
printf("\n");
}

return 0;
}
