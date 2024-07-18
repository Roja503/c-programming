#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b = sizeof(a) / sizeof(a[0]);
    int k = 2;
    int temp[k]; 
    for(int i = 0; i < k; i++) {
        temp[i] = a[i];
    }

    for(int i = k; i < b; i++) {
        a[i - k] = a[i];
    }
    for(int i = 0; i < k; i++) {
        a[b - k + i] = temp[i];
    }
    for(int i = 0; i < b; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
