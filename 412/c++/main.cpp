#include <iostream>
#include <vector>
#include <map>

using namespace std;

template <typename S>
ostream &operator<<(ostream &os,
                    const vector<S> &vector)
{
    // Printing all the elements
    // using <<
    for (auto element : vector)
    {
        os << element << " ";
    }
    return os;
}

vector<string> fizzBuzz(int n)
{
    vector<string> result;

    map<int, string> RESULT_STRING{
        {3, "Fizz"},
        {5, "Buzz"},
    };

    for (int i = 1; i <= n; i++)
    {
        string tempItem = "";

        for (auto element : RESULT_STRING)
        {
            if (i % element.first == 0)
            {
                tempItem += element.second;
            }
        }

        if (tempItem == "")
        {
            tempItem = to_string(i);
        }

        result.push_back(tempItem);
    }

    return result;
}

int main()
{
    cout << fizzBuzz(15) << endl;
}