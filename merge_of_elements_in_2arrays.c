#include <stdio.h>

int main() {
    char merged[100];
    int a[5]={1,2,3,4,5};
    int b[5]={5,4,3,2,1},n=5,n1=5;
    for(int i=0;i<n;i++)
    {
        merged[i]=a[i];
    }
    for(int i=0;i<n1;i++)
{
    merged[n+i]=b[i];
}
for(int i=0;i<n+n1;i++){
printf("%d",merged[i]);
}
    
    
    return 0;
}
