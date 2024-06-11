#include <iostream>

// Function definition
int count(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
}

int main()
{
    // Call the count function and store the result
    int result = count(156);

    // Print the result
    std::cout << "The number of digits in 156 is: " << result << std::endl;

    return 0;
}