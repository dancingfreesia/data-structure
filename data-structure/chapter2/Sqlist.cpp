#include <stdio.h>

#define MaxSize 10

typedef struct {
    int data[MaxSize];
    int length;
} Sqlist;

void Initlist(Sqlist &L)
{
    for (int i = 0 ; i < MaxSize; i++) {
       L.data[i] = 0;
    }
    L.length = 0;
}

int main(void)
{
    Sqlist L;
    Initlist(L);
    for (int i = 0; i < MaxSize; i++) {
        printf("data[%d] = %d\n", i, L.data[i]);
    }

    return 0;
}
