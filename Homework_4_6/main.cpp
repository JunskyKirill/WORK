#include <iostream>

using namespace std;

int main()
{

    string input;
    cout << "Enter sequence" << endl;
    cin >> input;
    int flag = 0;

    for (size_t i= 0; i < input.length() ; ++i)
    {
       char currentChar = input[i];

       if (currentChar == '(' )
       {
           ++flag;
       }
       else if (currentChar == ')')
       {
           --flag;
       }

        if (flag < 0)
        {
            break;
        }

    }

    if (flag == 0)
    {
        printf("Sequence is correct");
    }
    else
    {
        printf("Sequence is uncorrect");
    }


    return 0;
}
