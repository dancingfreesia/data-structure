#include <stdio.h>
#include <stdlib.h>

int maxsub(int a[], int len)
{
    int thissum = 0;
    int maxsum = 0;
    for (int i=0; i<len; i++)
    {
        thissum =  thissum + a[i];
        if (thissum > maxsum){maxsum = thissum;}
        else if (thissum < 0){thissum = 0;}
        printf("%d\t%d\n", thissum, maxsum);
    }
    return maxsum;
}

int main()
{
    int a[] = {2,3, -8, -6, 1, 10};
    int len = sizeof(a) / sizeof(int);
    int max = maxsub(a, len);
    printf("len = %d\n", len);
    printf("the maxsum is : %d\n", max);
}
