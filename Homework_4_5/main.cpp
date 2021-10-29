//Дана строка символов. Удалить из нее все слова нечетной длины. Слова отделяются друг от друга одним пробелом.

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    string input;
    printf("Enter string \n");
    getline (cin, input);
    int counter = 0;
    size_t i= 0;
    while (i < input.length())
    {
        char currentChar = input[i];

        if (currentChar != ' ')
        {
            ++counter;
        }
        else
        {
           if  (counter % 2 != 0)
           {
               input.replace(i - counter, counter + 1, "");
               i = i - ++counter;
           }
           counter = 0;
        }
        ++i;

        if (i == input.length() && counter % 2 != 0)
        {
            input.replace(i - counter, counter, "");
        }
    }

    printf("Result: %s" ,input.c_str());


    return 0;
}
