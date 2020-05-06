#include <stdio.h>

int test(int &x)
{
    x = 1024;
    printf("inside function: %d\n", x);

    return 0;
}

int main(void)
{
    int x = 1;
    printf("before test: %d\n", x);
    test(x);
    printf("after test: %d\n", x);

    return 0;
}
