#include <stdio.h>
int findMax(int a,int b){
 
 if (a <b)
 return (b);
 else return (a);
}
int main(void)
{
 int x =200;
 int y = 100;
 printf ("Max of %d and %d is %d\n", x, y, findMax(x,y));
 x = 100; y = -1;
 printf ("Max of %d and %d is %d\n", x, y, findMax(x,y));
 
 return 0;
 }
 
    