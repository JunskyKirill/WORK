#include <stdio.h>
#include <math.h>


int main()
{
    double n;
    printf("Please enter n : ");
    scanf ("%lf", &n);

    int x = 1;

    while ((n/=10) > 1)
    {
        x++;
    }

    printf("N = %d", x);



    return 0;
}
