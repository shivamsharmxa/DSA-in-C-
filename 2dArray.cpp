#include <iostream>
#include <vector>

using namespace std;

void printcol(int arr[][4], int row, int col)
{
    // column wise

    for (int j = 0; j < col; j++)
        for (int i = 0; i < row; i++)
            cout << arr[i][j] << " ";
}

void printSumDiagonal(int matrix[][3], int row, int col)
{
    int first = 0;
    int last = 0;

    // first diagonal sum
    int i = 0;
    while (i < row)
    {
        first += matrix[i][i];
        i++;
    }
    // Second diagonal Sum
    i = 0;
    int j = col - 1;

    while (j >= 0)
    {
        last += matrix[i][j];
        i++, j--;
    }

    cout << first << " " << last << " ";
}

int main()
{

    // create 2d array
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {2, 5, 6, 8, 4, 3, 8, 9, 7, 11, 12, 78};
    int ans[3][4];

    // print all the values in array row wise

    // for (int row = 0; row < 3; row++)
    //     for (int col = 0; col < 4; col++)
    //         cout << arr[row][col] << " ";

    // print all the value in array col wise, function call

    // printcol(arr, 3, 4);

    // find the given number in the array
    int x = 9;

    // for (int row = 0; row < 3; row++)
    //     for (int col = 0; col < 4; col++)
    //     {
    //         if (arr1[row][col] == x)
    //         {
    //             cout << "Yes";
    //             return 0;
    //         }
    //     }
    // cout << "No";

    // Add 2 Matrix

    // for (int row = 0; row < 3; row++)
    //     for (int col = 0; col < 4; col++)
    //     {
    //         ans[row][col] = arr1[row][col] + arr2[row][col];
    //     }

    // for (int row = 0; row < 3; row++)
    //     for (int col = 0; col < 4; col++)
    //         cout << ans[row][col] << " ";

    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printSumDiagonal(matrix, 3, 3);
}