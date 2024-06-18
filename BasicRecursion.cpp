#include <iostream>
#include <vector>

#include <iostream>

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
    cout << "The reversed array is : " << endl;
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

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    ReverseArray(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}