#include<iostream>
#include<algorithm>

#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};

int main() {
    Solution s;
    vector<int> v = {3, 2, 3};
    cout << s.majorityElement(v) << endl;
    return 0;
}