#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // create a vector
    // vector<int> v;
    // vector<int> v1(5, 2);

    // cout << "Size of the vector :" << v.size() << endl;
    // cout << "Capacity of the vector :" << v.capacity() << endl;

    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v1.push_back(7);

    // cout << "Size of the vector :" << v1.size() << endl;
    // cout << "Capacity of the vector :" << v1.capacity() << endl;

    // Delete the value from the vector
    //

    // print first and last elements in the vector

    vector<int> arr;

    arr.push_back(34);
    arr.push_back(65);
    arr.push_back(312);
    arr.push_back(44);
    arr.push_back(64);

    cout << arr[0] << endl;
    cout << arr.front() << endl;
    cout << arr[arr.size() - 1] << endl;
    cout << arr.back() << endl;

    // copy the elements of first vector to another

    // vector<int> a;

    // a = arr;
    // cout << a.size();
    // cout << endl;

    // for (auto it = arr.begin(); it != arr.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;
    // for (auto i : arr)
    //     cout << i << " ";

    // sorting in Vector

    vector<int> ans;

    ans.push_back(10);
    ans.push_back(78);
    ans.push_back(40);
    ans.push_back(3);
    ans.push_back(13);

    // sort in increasing order
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
        cout << endl;
    }

    // sort in decreasing order
    cout << "sort in decreasing order" << endl;
    sort(ans.rbegin(), ans.rend());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
        cout << endl;
    }
}
