#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int n = 40;
    int mas[n] ;
    int negIndex;
    int maxIndex;
    int max = INT32_MIN;
    for (int i = 0; i < 40 ; ++i)
    {
        int value =rand() %(n+n) - n;
        mas[i] = value;
        printf("%d ", mas[i]);
        if (max < value)
        {
            max = value;
            maxIndex= i;

        }
        if (value < 0)
        {
            negIndex = i;
        }

    }
    int buf = mas[maxIndex];

    mas[maxIndex] = mas[negIndex];
    mas[negIndex] = buf;
    printf("\n\n");
    for (int i = 0; i < 40 ; ++i)
    {
        printf("%d ", mas[i]);
    }




    return 0;
}
