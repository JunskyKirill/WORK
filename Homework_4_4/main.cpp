#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    printf("Please input column :\n");
    int columnSize;
    scanf ("%d", &columnSize);

    printf("Please input row :\n");
    int rowSize;
    scanf ("%d", &rowSize);

    int mtrx[rowSize][columnSize];
    int minSize = min(columnSize,rowSize);
    int sum = 0;

    for (int i = 0 ; i < rowSize; ++i)
    {
        for (int j = 0; j < columnSize; ++j)
        {
            mtrx[i][j]=rand()%10;
            printf("%d ", mtrx[i][j]);
        }

        printf("\n");

    }

    for (int i = 0 ; i < (minSize -1); ++i)
    {
        for (int j = 0; j <(minSize - 1 - i); ++j)
        {
            sum += mtrx[i][j];
        }


    }
    printf("\n");
    printf("%d", sum);


    return 0;
}
