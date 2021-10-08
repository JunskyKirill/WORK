// Найти наименьший общий делитель трех натуральных чисел

#include <stdio.h>
#include <math.h>


int main()
{
    int n1,n2,n3;

    printf("Please enter n1 : \n");
    scanf ("%d", &n1);
    printf("Please enter n2 : \n");
    scanf ("%d", &n2);
    printf("Please enter n3 : \n");
    scanf ("%d", &n3);

    int inputedMin = n1 > n2 ? (n2 > n3 ? n3 : n2) : (n1 > n3 ? n3 : n1); // Минимальное введенное число
    bool hasCommonDiv; // Найден ли общий наименьший делитель
    int div = 2; // общий наименьший делитель


    while (div <= inputedMin && !hasCommonDiv)
    {
        hasCommonDiv = n1 % div == 0 && n2 % div == 0 && n3 % div == 0;
        if (hasCommonDiv)
        {
            break;
        }

        ++div;
    }

    if (!hasCommonDiv)
    {
        div = 1;
    }


    printf("Min divider = %d", div);



    return 0;
}
