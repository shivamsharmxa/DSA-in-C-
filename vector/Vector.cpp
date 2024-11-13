#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // create a vector
    vector<int> v;

    cout << "Size of the vector :" << v.size() << endl;
    cout << "Capacity of the vector :" << v.capacity() << endl;

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout << "Size of the vector :" << v.size() << endl;
    cout << "Capacity of the vector :" << v.capacity() << endl;
}
