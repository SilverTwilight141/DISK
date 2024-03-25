#include <stdio.h>
int sum (int a,int b){
int res;
res = (a+b)*2;
res += a;
return res;
}
int main(){
int a,b,res;
printf ("Enter the Value of A:");
scanf ("%d",&a);
printf ("Enter the Value of B:");
scanf ("%d",&b);
if (a == b){
res = sum(a,b);
printf ("The Sum of A and B is %d",res;
}
else {
res = sum (a+b);
printf ("The Sum of A and B is %d");
}
return 0;
}



