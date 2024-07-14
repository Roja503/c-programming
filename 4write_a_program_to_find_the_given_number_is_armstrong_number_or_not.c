#include <stdio.h>
void main() {
   int a,n,rem,sum=0;
   scanf("%d",&n);
   a=n;
   while(n!=0)
   {
     rem=n%10;
     sum=sum+rem*rem*rem;
     n=n/10;
   }
   if(a==sum)
   printf("The given number is armstrong number");
   else
   printf("The given number is not armstrong number");
}
