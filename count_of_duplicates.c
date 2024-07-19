#include <stdio.h>

int main() {
   int n,k,count=0;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               count=count+1;
               for(k=j;k<n-1;k++)
               {
                   arr[k]=arr[k+1];
               }
               j--;
               n--;
           }
       }
   }
       printf("%d",count);
    return 0;
}
