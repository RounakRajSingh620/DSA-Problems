#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int kthSmallest(vector<int> &arr, int l, int r, int K)
{
    // Sort the array
    sort(arr.begin() + l, arr.begin() + r + 1);

    // Return the Kth smallest element
    return arr[l + K - 1];
}

int main()
{
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int K = 3;
    int result = kthSmallest(arr, 0, arr.size() - 1, K);
    cout << "The " << K << "th smallest element is: " << result << endl;

    return 0;
}
