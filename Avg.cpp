#include <stdio.h>
int avg(int a,int b,int c,int d){
	int res;
	res=(a+b+c+d)%4;
	return res;
}
int main(){
	int a,b,c,d,res;
	printf("Enter A B C D:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	res=(a,b,c,d);
	printf("The Avg of 4 Numbers are: %d",res);
	return 0;
}
