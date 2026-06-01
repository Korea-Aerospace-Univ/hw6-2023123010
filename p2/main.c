#include <stdio.h>

int main(void)
{
    int n;
    int arr1[20];
    int arr2[20];
    int *p;
    int *q;
    
    scanf("%d", &n);
    
    for (p = arr1; p < arr1 + n; p++) {
        scanf("%d", p);
    }
    for (q = arr2; q < arr2 + n; q++) {
        scanf("%d", q);
    }
    
    p = arr1;
    q = arr2 + n - 1;
    
    while(p < arr1 + n) {
        printf(" %d", *p + *q);
        
        p++;
        q--;
    }
    
    return 0;
}
