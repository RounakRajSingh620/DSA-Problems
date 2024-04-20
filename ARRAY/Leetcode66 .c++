#include<iostream>
#include<vector>    
using namespace std;    

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        short int i = digits.size() - 1;
        if (i >= 0) {
            while (i != -1) {
                digits[i] += 1;
                if (i == 0 && digits[i] == 10) {
                    digits[i] = 0;
                    digits.insert(digits.begin(), 1);
                }
                else if (digits[i] == 10) digits[i] = 0;
                else break;
                i--;
            }
        }
        return digits;
    }
};

int main(){
    vector<int> digits = {9, 9, 9};
    Solution s;
    vector<int> result = s.plusOne(digits);
    for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
    return 0;
}