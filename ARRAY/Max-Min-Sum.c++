#include <iostream>
#include <algorithm>

using namespace std;

int findSum(int A[], int N) {
    // Sort the array
    sort(A, A + N);

    // The minimum element is now the first element in the sorted array
    int min_val = A[0];
    // The maximum element is now the last element in the sorted array
    int max_val = A[N-1];

    // Return the sum of the minimum and maximum element
    return min_val + max_val;
}

int main() {
    int N = 5;
    int A[] = {-2, 1, -4, 5, 3};

    cout << "Sum of min and max: " << findSum(A, N) << endl;  // Output should be 1

    int N2 = 4;
    int A2[] = {1, 3, 4, 1};

    cout << "Sum of min and max: " << findSum(A2, N2) << endl;  // Output should be 5

    return 0;
}
