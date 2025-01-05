#include <iostream>
#include <vector>

using namespace std;

// int main()
// {
//     // create a vector
//     // vector<int> v;
//     // vector<int> v1(5, 2);

//     // cout << "Size of the vector :" << v.size() << endl;
//     // cout << "Capacity of the vector :" << v.capacity() << endl;

//     // v.push_back(2);
//     // v.push_back(3);
//     // v.push_back(4);
//     // v1.push_back(7);

//     // cout << "Size of the vector :" << v1.size() << endl;
//     // cout << "Capacity of the vector :" << v1.capacity() << endl;

//     // Delete the value from the vector
//     //

//     // print first and last elements in the vector

//     vector<int> arr;

//     arr.push_back(34);
//     arr.push_back(65);
//     arr.push_back(312);
//     arr.push_back(44);
//     arr.push_back(64);

//     cout << arr[0] << endl;
//     cout << arr.front() << endl;
//     cout << arr[arr.size() - 1] << endl;
//     cout << arr.back() << endl;

//     // copy the elements of first vector to another

//     // vector<int> a;

//     // a = arr;
//     // cout << a.size();
//     // cout << endl;

//     // for (auto it = arr.begin(); it != arr.end(); it++)
//     // {
//     //     cout << *it << " ";
//     // }
//     // cout << endl;
//     // for (auto i : arr)
//     //     cout << i << " ";

//     // sorting in Vector

//     vector<int> ans;

//     ans.push_back(10);
//     ans.push_back(78);
//     ans.push_back(40);
//     ans.push_back(3);
//     ans.push_back(13);

//     // sort in increasing order
//     sort(ans.begin(), ans.end());
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << endl;
//         cout << endl;
//     }

//     // sort in decreasing order
//     cout << "sort in decreasing order" << endl;
//     sort(ans.rbegin(), ans.rend());
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << endl;
//         cout << endl;
//     }
// }

// Prefix and Suffix

// int divide(vector<int> arr)
// {
//     int Maxi = INT_MIN, prefix = 0, total_sum = 0, n = arr.size();

//     // total sum
//     for (int i = 0; i < n; i++)
//     {
//         total_sum += arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         prefix += arr[i];
//         if (total_sum == 2 * prefix)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of array :";
//     cin >> n;

//     vector<int> v(n);
//     cout << "Enter the element in array :";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     cout << divide(v);
// }

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

// better approach
vector<int> BetterPair(vector<int> vec, int target)
{
    vector<int> ans;
    int n = vec.size();
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int Ps = vec[start] + vec[end];
        if (Ps > target)
        {
            end--;
        }
        else if (Ps < end)
        {
            start++;
        }
        else
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> pair = {2, 7, 11, 15};
    int target = 21;

    vector<int> ans = BetterPair(pair, target);
    if (!ans.empty())
    {
        cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    }
    else
    {
        cout << "No valid pair found." << endl;
    }
    return 0;
}
