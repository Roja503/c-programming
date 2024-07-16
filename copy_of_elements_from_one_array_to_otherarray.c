#include <stdio.h>

int main() {
    int number[5]={1,2,3,4,5};
    int number2[5];
    for(int i=0;i<5;i++)
    {
        number2[i]=number[i];
    }
    for(int i=0;i<5;i++)
        printf("%d",number2[i]);

    return 0;
}
