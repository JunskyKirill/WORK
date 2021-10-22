//

#include <stdio.h>
#include <math.h>

int main()
{
    int input ;
    printf("Please enter numbers: \n");
    scanf ("%d", &input);

    int result[] = { -1, -1, -1, -1, };
    while (input != 0)
    {
        int mod = input % 10;
        input /= 10;
        int i = 0;
        while (mod < result[i])
            ++i;
        for (int j = 2; j >= i; --j)
            result[j + 1] = result[j];
        result[i] = mod;
    }
    for(int i = 0; i < 4; ++i)
    {

    printf("%d", result[i]);
    }
    return 0;
}
