#include <stdio.h>

int main()
{
    int H, M;
    int time;
    int total_hour = 0;
    int total_min = 0;

    scanf("%d %d", &H, &M);
    scanf("\n%d", &time);

    if (M + time > 59)
    {
        total_min = M + time;
        total_hour = H + total_min / 60;
        if (total_hour >= 24)
        {
            printf("%d %d",total_hour - 24, total_min % 60);
        }
        else
            printf("%d %d",total_hour, total_min % 60);
    }
    else
        printf("%d %d", H, M + time);
    return 0;
}