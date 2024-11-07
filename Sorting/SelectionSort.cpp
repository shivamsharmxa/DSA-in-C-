#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {23, 56, 45, 78, 98, 89};

    for (int i = 0; i < 5; i++)
    {
        int index = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[index], arr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}