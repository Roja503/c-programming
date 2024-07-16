#include<stdio.h>
int main()
{
    int max,min,a[5]={1,2,3,4,5},n=5;
    min=a[0];
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("min:%d,max:%d",min,max);
   }
    
