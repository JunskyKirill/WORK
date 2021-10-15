// Определить местоположение элементов массива А(30), не встречающихся в массиве B(15)
#include <iostream>

using namespace std;

int main()
{
    const int aSize = 30;
    const int bSize = 15;
    int aMass[aSize];
    int bMass[bSize];



    for (int i = 0; i <30; ++i)
    {
        aMass[i]= rand() % (aSize+aSize);
        if (i<15)
        {
            bMass[i]= rand() % (bSize+bSize);
        }
        int currentA = aMass[i];
        bool finded ;

        for (int j = 0; j < 15; ++j)
        {
            finded = bMass[j] == currentA;
            if (finded){
                break;
            }
        }

        if (!finded)
        {
            printf("%d ", i );
        }
    }

    printf("\n\n");

    for (int i = 0; i <30; ++i)
    {
        printf("%d ", aMass[i] );
    }
     printf("\n\n");
    for (int i = 0; i <15; ++i)
    {

        printf("%d ", bMass[i] );
    }




    return 0;
}
