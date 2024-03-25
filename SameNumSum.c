#include <stdio.h>
int sum (int a,int b){
int res;
if (a == b){
res = (a+b)*2;
return res;
}
}
int main(){
int a,b,res;
printf ("Enter the Value of A:");
scanf ("%d",&a);
printf ("Enter the Value of B:");
scanf ("%d",&b);
res = sum(a,b);
printf ("The Sum of a and b is %d",res);

return 0;
}



