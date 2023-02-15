#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int> v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}

double getAverage(vector<int> nums)
{
    if (nums.empty())
    {
        return 0;
    }
    int sum = getSum(nums);
    return static_cast<double>(sum) / nums.size();
}

int main()
{
    vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = getSum(myVector);
    cout << "Sum: " << sum << endl;

    double average = getAverage(myVector);
    cout << "Average: " << average << endl;

    return 0;
}
