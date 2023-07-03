#include <iostream>
#include <vector>

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

vector<int> runningSum(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] += nums[i - 1];
    }
    return nums;
}

int main()
{
    vector<int> input;
    input.push_back(1);
    input.push_back(1);
    input.push_back(1);
    input.push_back(1);

    cout << runningSum(input) << endl;
}