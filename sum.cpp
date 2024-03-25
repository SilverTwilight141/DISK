#include <stdio.h>
int val(int a,int b,int c){
	int res;
	if (a==13){
		res=0;
		}else if
		(b==13){
			res=a;
			}else if
				(c==13){
					res=a+b;
			}else{
			res=a+b+c;	
			}	
			return res;		
			}
int main(){
	int a,b,c,res;
	printf("A:");
	scanf("%d",&a);
	
	printf("B:");
	scanf("%d",&b);
	
	printf("C:");
	scanf("%d",&c);
	
    res=(val(a,b,c));
		printf("The Sum is: %d",res);
	
		
	return 0;
}
	
	
