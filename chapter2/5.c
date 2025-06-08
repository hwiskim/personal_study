#include <stdio.h>

int main()
{
    int H, M;

    scanf("%d", &H);
    scanf("%d", &M);

    if (M < 45)
    {
        if(H == 0)
            printf("23 ");
        else
            printf("%d ", H - 1);
        printf("%d", 60 - 45 + M);
    }
    else
        printf("%d %d", H, M - 45);
    return 0;
}