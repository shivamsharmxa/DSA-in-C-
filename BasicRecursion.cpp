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

int main()
{
    print2(1, 5);
    return 0;
}
