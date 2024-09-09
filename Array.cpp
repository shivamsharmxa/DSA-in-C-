#include <iostream>
#include <climits>

int LargestNumber(int arr[], int n)
{
    int largest = arr[0]; // Initialize largest with the first element
    for (int i = 1; i < n; i++)
    { // Start loop from the second element
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[] = {12, 23, 54, 28, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "The largest number is " << LargestNumber(arr, n) << std::endl; // Output the largest number
    return 0;
}

// Second largest Number in Array
int SlargestNumber(int arr[], int n)
{
    int largest = arr[0];
    int slargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int main()
{
    int arr[] = {12, 23, 54, 28, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "The Second largest number is " << SlargestNumber(arr, n) << std::endl; // Output the largest number
    return 0;
}
