#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements (between 0 and 12):" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Precompute frequency of numbers 0-12
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0 && arr[i] <= 12)
        {
            hash[arr[i]] += 1;
        }
    }

    cout << "Precomputation complete. Frequencies of numbers 0-12 have been calculated." << endl;

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    cout << "Enter " << q << " query numbers (between 0 and 12):" << endl;
    while (q--)
    {
        int number;
        cin >> number;
        if (number >= 0 && number <= 12)
        {
            cout << "The frequency of " << number << " is: " << hash[number] << endl;
        }
        else
        {
            cout << "The number " << number << " is out of bounds (0-12). Frequency is: 0" << endl;
        }
    }
    return 0;
}
