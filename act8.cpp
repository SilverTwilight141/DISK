#include<stdio.h>
int main(){
int numbers[2][10] = {{1,2,3,4,5,6,7,8,9,10},{4,5,6,7,8,9,10,11,12,13}};



for(int i = 0; i < 2; i++)
{
for (int j = 0; j < 10; j++)
{
printf("%d", numbers[i][j]);
}
printf("\n");
}


return 0;
}
