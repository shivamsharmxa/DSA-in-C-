#include <iostream>
using namespace std;

// int main()
// {
//     int arr[1000];
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = n - 2; i >= 0; i--)
//     {
//         bool swapped = false;
//         for (int j = 0; j <= i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swapped = true;
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//         if (!swapped)
//             break;
//     }

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// decreasing methond

// int main()
// {
//     int arr[1000];
//     int n;
//     cout << "Enter the number :";
//     cin >> n;

//     cout << " Enter the element of the array :";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = n - 2; i >= 0; i--)
//     {
//         bool swapped = false;
//         for (int j = 0; j <= i; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 swapped = true;
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//         if (!swapped)
//             break;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Increasing order from the last

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Enter the elements of the array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = n - 1; j >= i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swapped = true;
                swap(arr[j], arr[j - 1]);
            }
        }
        if (!swapped)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}