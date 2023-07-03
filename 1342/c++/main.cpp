#include <iostream>

using namespace std;

int numberOfSteps(int num)
{
    int res = 0;

    while (num > 0)
    {
        if ((num & 1) == 1)
        {
            num = num ^ 1;
        }
        else
        {
            num = num >> 1;
        }
        res++;
    }

    return res;
}

int main()
{
    cout << numberOfSteps(14) << endl;
}