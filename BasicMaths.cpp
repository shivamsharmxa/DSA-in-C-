#include <iostream>

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

#include <iostream>

void Palindrome(int n)
{
    int reversedNum = 0;
    int Number = n;

    while (n > 0)
    {
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        n = n / 10;
    }

    if (reversedNum == Number)
    {
        std::cout << "It's a palindrome" << std::endl;
    }
    else
    {
        std::cout << "It's not a palindrome" << std::endl;
    }
}

// Armstrong Number
