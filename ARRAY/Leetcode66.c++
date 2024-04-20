#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int>plusOne(vector<int> &digits)
    {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] != 9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
                digits[i] = 0;
            }
        }
        // If we are here, it means all digits were 9, so we add a new digit 1 at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{
    vector<int> digits = {9, 9, 8};
    Solution s;
    vector<int> result = s.plusOne(digits);
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    return 0;
}
