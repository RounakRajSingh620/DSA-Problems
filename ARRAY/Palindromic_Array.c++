#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    // Function to check if a string is palindrome
    bool isPalindrome(const string &str)
    {
        int s = 0, e = str.size() - 1;
        while (s <= e)
        {
            if (str[s++] != str[e--])
                return false;
        }
        return true;
    }

    // Function to check if all numbers in an array are palindromes
    int PalinArray(int a[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            string s = to_string(a[i]);
            if (!isPalindrome(s))
                return 0;
        }
        return 1;
    }
};

int main()
{
    int arr[] = {111, 222, 333, 444, 555};
    int n = sizeof(arr) / sizeof(arr[0]);
    Solution sol;
    cout << sol.PalinArray(arr, n) << endl;
    return 0;
}
