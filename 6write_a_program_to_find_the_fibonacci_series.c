#include <stdio.h>
void main() {
   int a=0,b=1,c=a+b,n,i;
   scanf("%d",&n);
   printf("%d%d\t",a,b);
   for(i=2;i<=n;i++)
   {
     printf("%d",c);
     a=b;
     b=c;
     c=a+b;
   }
}
