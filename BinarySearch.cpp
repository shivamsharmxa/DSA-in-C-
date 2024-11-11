#include <iostream>
using namespace std;
// int BinarySearch(int arr[], int n, int key)
// {
//     int start = 0, end = n - 1;

//     while (start <= end) // Continue searching while there is a valid range
//     {
//         int mid = start + (end - start) / 2; // Calculate mid-point to prevent overflow

//         // Check if mid is the key
//         if (arr[mid] == key)
//         {
//             return mid; // Return the index if the key is found
//         }

//         // If key is greater, ignore the left half
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }

//         // If key is smaller, ignore the right half
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     return -1; // Key not found
// }

// int main()
// {
//     int arr[1000];
//     int n;
//     cout << " Enter the size of the Array : ";
//     cin >> n;

//     cout << " Enter the elements of the array :";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cout << "Enter the key Value : ";
//     cin >> key;

//     cout << BinarySearch(arr, n, key);
//     return 0;
// }

// Total occurance of given element in the array

#include <iostream>
using namespace std;

int TotalOccurrence(int arr[], int target, int n)
{
    int start = 0, end = n - 1, first = -1, last = -1, mid;

    // First occurrence
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1; // Searching from the left
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // If the first occurrence was not found, return 0
    if (first == -1)
    {
        return 0;
    }

    // Last occurrence
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1; // Searching from the right
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return last - first + 1;
}

int main()
{
    int n, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[1000];
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target element: ";
    cin >> target;

    int occurrences = TotalOccurrence(arr, target, n);
    if (occurrences > 0)
    {
        cout << "Total occurrences of " << target << " is: " << occurrences << endl;
    }
    else
    {
        cout << target << " is not present in the array." << endl;
    }

    return 0;
}
