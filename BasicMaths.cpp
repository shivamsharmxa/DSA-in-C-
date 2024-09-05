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
void isArmstrong(int n)
{
    int originalNum = n;
    int NumDigits = 0;
    int sum = 0;

    int temp = n;
    while (temp > 0)
    {
        NumDigits++;
        temp = temp / 10;
    }

    // calculate the sum of the digits
    temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += std::pow(digit, NumDigits);
        temp = temp / 10;
    }
    // Check if the sum is equal to the original number
    if (sum == originalNum)
    {
        std::cout << "It's an Armstrong number" << std::endl;
    }
    else
    {
        std::cout << "It's not an Armstrong number" << std::endl;
    }
}

void printDivisor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            std::cout << i << " " << std::endl;
        }
    }
}
int main()
{
    int number;
    std::cout << "Enter the number";
    std::cin >> number;
    printDivisor(number);
    return 0;
}