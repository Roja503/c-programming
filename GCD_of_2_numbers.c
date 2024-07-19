#include <stdio.h>

int main() {
   int a=3,b=6;
   while(a!=b)
   {
       if(a>b)
       a-=b;
       else
       b-=a;
   }
   printf("gcd is %d",a);
    return 0;
}
