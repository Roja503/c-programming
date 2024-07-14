#include<math.h>
#include <stdio.h>
void main() {
   int n,sr,a;
   scanf("%d",&n);
   sr=sqrt(n);
   a=sr;
   if(a*a==n)
   printf("It is a perfect square");
   else
   printf("It is not a perfect square");
}
