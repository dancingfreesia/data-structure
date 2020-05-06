#include <stdio.h>

int main(void)
{
    int m;
    int n = 0;
    int a;

    printf("please input a number:\n");
    scanf("%d", &m);

    do {
        a = m % 10;
        m = m / 10;
        n = (n * 10) + a;
    } while(m);
    
    printf("the resverse number is :%d\n", n);

    return 0;
}
