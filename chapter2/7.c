#include <stdio.h>

int main()
{
    int iArray[3];
    int temp;
    int i;

    for (i = 0 ; i < 3 ; i++)
        scanf("%d", &iArray[i]);
    for (i = 0; i < 2 ; i++)
    {
        if (iArray[i] < iArray[i+1])
        {
            temp = iArray[i];
            iArray[i] = iArray[i+1];
            iArray[i+1] = temp;
        } 
    }
    if (iArray[0] < iArray[1])
    {
        temp = iArray[0];
        iArray[0] = iArray[1];
        iArray[1] = temp;
    }
    if((iArray[0] == iArray[1]) || (iArray[1] == iArray[2]) || (iArray[2] == iArray[0]))
    {
        if((iArray[0] == iArray[1]) && (iArray[1] == iArray[2]) && (iArray[2] == iArray[0]))
        {
            printf("%d", iArray[0]*1000 + 10000);
            return 0;
        }
        if(iArray[0] == iArray[1])
        {
            printf("%d", iArray[0]*100 + 1000);
        }
        else if(iArray[1] == iArray[2])
        {
            printf("%d", iArray[1]*100 + 1000);
        }
    }
    else
    { 
        printf("%d", iArray[0]*100);
    }
    return 0;
}