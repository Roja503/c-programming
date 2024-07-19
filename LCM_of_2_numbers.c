#include <stdio.h>

int main() {
   int a=3,b=6,max;
   max=(a>b)?a:b;
   if(max % a == 0 && max % b == 0)
   {
       printf("LCM %d and %d is %d",a,b,max);
    }
    return 0;
}
