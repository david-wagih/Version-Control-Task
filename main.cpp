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

int getMin(const vector<int> &v)
{
    int minVal = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < minVal)
        {
            minVal = v[i];
        }
    }
    return minVal;
}

int main()
{
    vector<int> v = {10, 5, 15, 20, 25, 30, 35, 40, 45, 50};
    cout << "Sum: " << getSum(v) << endl;
    cout << "Minimum value: " << getMin(v) << endl;
    return 0;
}
