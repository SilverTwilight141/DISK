#include <stdio.h>
int div (int a,int b){
int res;
if ( a % 10 == b % 10)
{
return 1;
} else {
return 0;
}
return res;
}
int main(){
int a,b,res;
printf ("Enter the Value of A and B:");
scanf ("%d %d",&a,&b);

if (div(a,b)) {
printf ("True");
} else {
printf ("False");
}
return 0;
}





    