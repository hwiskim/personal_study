#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int a, b;
    int *sum;
    int i;

    scanf("%d", &num);
    sum = (int *)malloc(sizeof(int)*num);
    for(i = 0; i < num; i++)
    {
        scanf("%d %d", &a, &b);
        sum[i] = a + b;
    }
    for (i = 0; i < num; i++)
    {
        printf("%d\n", sum[i]);
    }
    return 0;
}