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

int main()
{
    print();
    return 0;
}
