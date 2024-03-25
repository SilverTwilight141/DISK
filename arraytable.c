#include<stdio.h>

int main(){
int numbers[2][3];

numbers[0][1] = 1;
numbers[0][2] = 2;
numbers[0][3] = 3;
numbers[1][0] = 4;
numbers[1][1] = 5;
numbers[1][2] = 6;

for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 3; j++)
{
printf("%d", numbers[i][j]);
}
printf("\n");
}


return 0;
}
