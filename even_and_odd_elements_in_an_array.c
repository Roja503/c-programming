#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int b=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<b;i++)
    {
    if(a[i]%2==0)
    {
        printf("%d even\n",a[i]);
    }
    else
    {
        printf("%d odd\n",a[i]);
    }
    }
}
