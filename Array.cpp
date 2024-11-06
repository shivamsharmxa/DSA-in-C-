#include <iostream>
using namespace std;

int main()
{
    int table_of_two[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    for (int i = 0; i < 10; i++)
    {
        cout << table_of_two[i] << " ";
    }
    return 0;
}

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