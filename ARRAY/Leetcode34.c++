#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int firstOcc(vector<int> &nums, int target)
    {
        int s = 0, e = nums.size() - 1;
        int ans = -1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                e = mid - 1; // move left to find the first occurrence
            }
            else if (target > nums[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return ans;
    }

    int lastOcc(vector<int> &nums, int target)
    {
        int s = 0, e = nums.size() - 1;
        int ans = -1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                s = mid + 1; // move right to find the last occurrence
            }
            else if (target > nums[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = firstOcc(nums, target);
        int last = lastOcc(nums, target);
        return {first, last};
    }
};
int main()
{
    Solution s;
    vector<int> v = {5, 7, 7, 8, 8, 10};
    vector<int> res = s.searchRange(v, 8);
    for (int i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}