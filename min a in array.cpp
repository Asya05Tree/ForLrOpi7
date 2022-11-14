// min a in array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        int RandValue = rand() % 20;
        arr[i] = RandValue; //‚ÓÚ ÚÛÚ ·˚ÎÓ == ‚ÏÂÒÚÓ =, ÍÓÏÔÂÎˇÚÓÛ ÌÓÏ
    }
    int minValue = arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }

    std::cout << " youre min value:" << minValue << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
} // ˇ ÒÏÓ„Î‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡‡

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
