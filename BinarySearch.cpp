#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;

    while (start <= end) // Continue searching while there is a valid range
    {
        int mid = start + (end - start) / 2; // Calculate mid-point to prevent overflow

        // Check if mid is the key
        if (arr[mid] == key)
        {
            return mid; // Return the index if the key is found
        }

        // If key is greater, ignore the left half
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        // If key is smaller, ignore the right half
        else
        {
            end = mid - 1;
        }
    }

    return -1; // Key not found
}

int main()
{
    int arr[1000];
    int n;
    cout << " Enter the size of the Array : ";
    cin >> n;

    cout << " Enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key Value : ";
    cin >> key;

    cout << BinarySearch(arr, n, key);
    return 0;
}