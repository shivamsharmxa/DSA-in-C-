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
    vector<int> vnew;
    vnew.push_back(4);
    vnew.push_back(45);
    vnew.push_back(67);
    vnew.push_back(98);
    vnew.push_back(78);
    vnew.pop_back();

    cout << " Size of the Vector :" << vnew.size() << endl;
    cout << " Capacity of the Vector :" << vnew.capacity() << endl;

    vnew.erase(vnew.begin() + 3);
    cout << "After removing the element" << endl;
    cout << " Size of the Vector :" << vnew.size() << endl;
    cout << " Capacity of the Vector :" << vnew.capacity() << endl;

    for (int i = 0; i < vnew.size(); i++)
    {
        cout << vnew[i] << " " << endl;
    }

    // insert value
    vnew.insert(vnew.begin() + 1, 69);
    cout << endl;

    for (int i = 0; i < vnew.size(); i++)
    {
        cout << vnew[i] << " " << endl;
    }
}
