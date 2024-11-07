#include <iostream>
using namespace std;

// size of the array

// int main()
// {
//     int arr[] = {1, 2, 4, 5, 6};

//     // size of one element of arr
//     cout << "Size of arr[0]:" << sizeof(arr[0]);

//     // size of array
//     cout << "Size of the arr:" << sizeof(arr) << endl;

//     // length of the array
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Length of an array: " << n << endl;

//     return 0;
// }

// // find minimum value in Array

// int main()
// {

//     int arr[5] = {23, 45, 67, 54, 78};
//     int ans = INT_MAX;

//     // Min Value
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] < ans)

//             ans = arr[i];
//     }
//     cout << ans;
//     return 0;
// }

// // Max number in the array

// int main()
// {
//     int arr[5] = {45, 76, 90, 12, 32};
//     int ans = INT_MIN;

//     // Max value
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] > ans)
//             ;
//         ans = arr[i];
//     }
//     cout << ans;
//     return 0;
// }

// // Search element in the array
// int Search(int arr[], int K, int N)
// {
//     for (int i = 0; i < N; i++)
//     {
//         if (arr[i] == K)
//         {

//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {23, 56, 78, 98, 59};
//     int N = sizeof(arr) / sizeof(arr[0]);
//     int K = 98;

//     int result = Search(arr, K, N);
//     if (result != -1)
//     {
//         cout << "Element found at index " << result << endl;
//     }
//     else
//     {
//         cout << "Element not found" << endl;
//     }
//     return 0;
// }

// // Reverse an array

// int main()
// {
//     int arr[6] = {2, 5, 6, 7, 8, 9};
//     int start = 0, end = 5;

//     while (start < end)

//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     };
//     for (int i = 0; i < 6; i++)
//         cout << arr[i] << " ";
// }
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive number greater than 0." << endl;
        return 0; // Exit if n is invalid
    }

    int arr[1000]; // Array to store Fibonacci numbers
    arr[0] = 0;    // The first Fibonacci number
    if (n > 1)
    {
        arr[1] = 1; // The second Fibonacci number (if n > 1)
    }

    // Calculate Fibonacci sequence for n > 2
    for (int i = 2; i < n; i++)
    {                                     // Loop runs until i < n
        arr[i] = arr[i - 1] + arr[i - 2]; // Fibonacci relation
    }

    // Print the nth Fibonacci number
    cout << "The " << n << "th Fibonacci number is: " << arr[n - 1] << endl;

    return 0;
}