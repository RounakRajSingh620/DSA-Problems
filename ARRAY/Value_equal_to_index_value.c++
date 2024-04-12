#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> valueEqualToIndex(int arr[], int n)
    {
        vector<int> index;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i - 1] == i)
            {
                index.push_back(i);
            }
        }
        return index;
    }
};

int main()
{

    int arr[] = {1, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    Solution sol;

    vector<int> result = sol.valueEqualToIndex(arr, n);
    if (result.empty())
    {
        cout << "No elements match their index.";
    }
    else
    {
        cout << "Elements matching their indices: ";
        for (int idx : result)
        {
            cout << idx << " ";
        }
    }
    cout << endl;

    return 0;
}
