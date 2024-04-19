#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] < target)
                l = mid + 1;
            else if (nums[mid] > target)
                r = mid - 1;
            else
                return mid;
        }
        return l;
    }
};
int main(){
    vector<int> nums = {1, 3, 5, 6};
    Solution s;
    cout << s.searchInsert(nums, 5) << endl;
    return 0;
}