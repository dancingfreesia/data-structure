#include <stdio.h>

int main(void)
{
    int a[100];
    int k = 0;

    for (int i = 2; i <= 100; i++) {
        int is_prime = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            a[k] = i;
            k += 1;
        }
    }

    for (int i = 0; i < k; i++) {
        printf("%d\t", a[i]);
    }

    printf("\n");
    return 0;
}
