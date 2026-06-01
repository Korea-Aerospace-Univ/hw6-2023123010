#include <stdio.h>

int main(void)
{
    int n = 0;
    int arr1[20];
    int arr2[20];
    int *p = nullptr;
    int *q = nullptr;
    
    scanf("%d", &n);
    
    for (p = arr1; p < arr1 + n; p++) {
        scanf("%d", p);
    }
    for (q = arr2; q < arr2 + n; q++) {
        scanf("%d", q);
    }
    
    for(p = arr1, q = arr2 + n - 1; p < arr1 + n; p++,q--) {
        printf(" %d", *p + *q);
    }
    
    return 0;
}
