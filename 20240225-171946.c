#include <stdio.h>
int div(int a,int b){
int res;
res = a+b;
if (a % 10 == b % 10){
return 1;
}else{
return 0;
}
return res;
}
int main(){
int a,b,res;
printf("Enter the Value of A: ");
scanf("%d",&a);
printf("Enter the Value of B: ");
scanf("%d",&b);
if (div(a,b)){
printf("True");
}else{
printf("False");
}
return 0;
}





    