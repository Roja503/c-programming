#include <stdio.h>

int main() {
    int a[6]={1,2,2,6,4,4};
    int temp;
    for(int i=0;i<6-1;i++){
        for (int j = 0; j < 6 - i - 1; j++) {
            if(a[j]>a[j+1]){
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
        }
    }
    }
   for(int i=0;i<6;i++)
   printf("%d",a[i]); 
}
