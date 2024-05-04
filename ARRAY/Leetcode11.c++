#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;
        while (left < right)
        {
            int area = min(height[left], height[right]) * (right - left);
            maxArea = max(area, maxArea);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxArea;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << s.maxArea(v) << endl;
    return 0;
}