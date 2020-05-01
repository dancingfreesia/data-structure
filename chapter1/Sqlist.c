#include <stdio.h>

#define MaxSize 10

typedef struct {
    int data[MaxSize];
    int length;
} Sqlist;

void Initlist(Sqlist *L)
{
    for (int i = 0 ; i < MaxSize; i++) {
       L->data[i] = 0;
    }
    L->length = 0;
}

void ListAmend(Sqlist *L, int list[])
{
    for (int i = 0; i < MaxSize; i++) {
        L->data[i]  = list[i];
        L->length += 1;
    }
}

void ListDelete(Sqlist *L, int a, int b)
{
    int k = 0;

    if (L->length == 0 || a >= b) {
        printf("arguments wrong\n");
    } else {
        for (int i = 0; i < L->length; i++) {
            if (L->data[i] < a || L->data[i] > b) {
                L->data[k] = L->data[i];
                k++;
            }
        }
        L->length = k;
    }
}

int main(void)
{
    int a = 4;
    int b = 8;
    int list[10] = {1, 5, 3, 7, 4, 9, 2, 8, 6, 10};
    Sqlist L;

    Initlist(&L);
    ListAmend(&L, list);
    ListDelete(&L, a, b);

    for (int i = 0; i < L.length; i++) {
        printf("data[%d] = %d\n", i, L.data[i]);
    }
    printf("length = %d\n", L.length);

    return 0;
}
