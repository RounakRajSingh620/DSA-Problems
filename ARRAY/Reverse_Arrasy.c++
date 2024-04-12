#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{

    int s = 0, e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// another approach

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = reverse(v);
    print(ans);

// another main function
    int arr[6] = {1, 4, 0, 5, 6, -2};
    int brr[5] = {2, 6, 8, 7, 10};
    reverse(arr, 6);
    reverse(brr, 5);
    printArray(arr, 6);
    printArray(arr, 5);

    return 0;
}
