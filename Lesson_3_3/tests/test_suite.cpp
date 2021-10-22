#include "gtest/gtest.h"
#include "../SortDigitsFunc.h"

TEST ( TestsForMyWork,TestSortDigits)
{
    printf("Enter 4 number\n");
    int input;
    scanf("%d", &input);
    printf("Enter result \n");
    int inputResult;
    scanf("%d", &inputResult);
    EXPECT_EQ(SortDigits(input), inputResult);
}
