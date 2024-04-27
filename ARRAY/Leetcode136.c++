#include<iostream>;
#include<queue>;
#include<unordered_map>;
#include<unordered_set>;
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int s = nums[0];
        int length = nums.size();

        for(int i = 1; i < length; i++) { s = s ^ nums[i]; }
        return s;
    }
};

int main() {
    Solution s;
    vector<int> v = {2, 2, 1};
    cout << s.singleNumber(v) << endl;
    return 0;
}