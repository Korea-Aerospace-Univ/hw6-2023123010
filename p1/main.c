#include <stdio.h>

int main(void)
{
    char arr[10];
    char *p = nullptr;
    char *q = nullptr;
    char max = '\0';
    int m_count = 0;
    
    for (p = arr; p < arr + 10; p++) {
        scanf("%c", p);
    }
    
    for (p = arr; p < arr + 10; p++) {
        int count = 0;
        for (q = arr; q < arr + 10; q++) {
            if (*p == *q) {
                count++;
            }
        }
        if (count > m_count) {
        m_count = count;
        max = *p;
    }
    }
    printf("%c %d", max, m_count);
}
