#include <iostream>
using namespace std;

// size of the array

int main()
{
    int arr[] = {1, 2, 4, 5, 6};

    // size of one element of arr
    cout << "Size of arr[0]:" << sizeof(arr[0]);

    // size of array
    cout << "Size of the arr:" << sizeof(arr) << endl;

    // length of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of an array: " << n << endl;

    return 0;
}

// find minimum value in Array

int main()
{

    int arr[5] = {23, 45, 67, 54, 78};
    int ans = INT_MAX;

    // Min Value
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < ans)

            ans = arr[i];
    }
    cout << ans;
    return 0;
}

// Max number in the array

int main()
{
    int arr[5] = {45, 76, 90, 12, 32};
    int ans = INT_MIN;

    // Max value
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > ans)
            ;
        ans = arr[i];
    }
    cout << ans;
    return 0;
}

// Search element in the array
int Search(int arr[], int K, int N)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == K)
        {

            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {23, 56, 78, 98, 59};
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 98;

    int result = Search(arr, K, N);
    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}