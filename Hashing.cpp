#include <iostream>
#include <vector>

using namespace std;

int cnt = 0;

void print()
{
    // Base condition
    if (cnt == 5)
        return; // Properly return if cnt is 5

    cout << cnt << endl;
    cnt++;
    print();
}
// Printing Name n times
void print2(int i, int n)
{
    // Base condition
    if (i > n)
        return;
    cout << "shivam" << endl;
    print2(i + 1, n);
}

// Reverse an array by using 2 pointers
void printArray(int arr[], int n)
{
    cout << "The reversed array is by one : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void ReverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;
    swap(arr[start], arr[end]);
    ReverseArray(arr, start + 1, end - 1);
}

// by using one pointer
void ReverseArraybyOne(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    ReverseArraybyOne(i + 1, arr, n);
}

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    ReverseArraybyOne(0, arr, n);
    printArray(arr, n);
    return 0;
}
