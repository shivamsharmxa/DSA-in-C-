#include <iostream>

// Function definition
// Count the number of digits
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

// Reverse a number
int Reverse(int n)
{
    int ReversedNum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        ReversedNum = ReversedNum * 10 + digit;
        n = n / 10;
    }
    return ReversedNum;
}

int main()
{
    // Call the count function and store the result
    int result = count(156);
    int Reversed = Reverse(4567);

    // Print the results
    std::cout << "The number of digits in 156 is: " << result << std::endl;
    std::cout << "The reversed number of 4567 is: " << Reversed << std::endl;

    return 0;
}
