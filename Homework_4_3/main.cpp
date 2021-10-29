//Дана матрица размером 7х7 Поменять местами k-й столбец с k-й строкой

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    printf("Please enter k: ");

    int k;
    scanf("%d", &k);
    if (k > 7 && k > 0)
    {
        printf("Error k must be < 7 and > 0");
        return 0;
    }
    int mtrx[7][7];
    int normalizedK = k-1;

    for (int i = 0 ; i < 7; ++i)
    {
        for (int j = 0; j < 7; ++j)
        {
            mtrx[i][j]=rand()%10;
            printf("%d ", mtrx[i][j]);
        }

        printf("\n");
    }

    for (int i = 0 ; i < 7; ++i)
    {
        int buff = mtrx[normalizedK][i];
        mtrx[normalizedK][i] = mtrx[i][normalizedK];
        mtrx[i][normalizedK] = buff;
    }
    printf("\n");
    printf("\n");
    for (int i = 0 ; i < 7; ++i)
    {

        for (int j = 0; j < 7; ++j)
        {
            printf("%d ", mtrx[i][j]);
        }

        printf("\n");
    }




    return 0;
}
