#include <cstdlib>
#include <string>

int SortDigits (int number)
{
    int result[] = { -1, -1, -1, -1 };
    while (number != 0)
    {
        int mod = number % 10;
        number /= 10;
        int i = 0;
        while (mod < result[i])
            ++i;
        for (int j = 2; j >= i; --j)
            result[j + 1] = result[j];
        result[i] = mod;
    }

    std::string strResult;
    for (int i = 0; i < 4; ++i)
    {
        strResult += std::to_string(result[i]);
    }

    return std::atoi(strResult.c_str());
}
