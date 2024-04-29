#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        bool flag = false;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1])
                return true;
        }
        return flag;
    }
};
int main() {
    Solution s;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << s.containsDuplicate(v) << endl;
    return 0;
}


