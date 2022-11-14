// min a in array.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
        arr[i] = RandValue; 
    }
    int minValue = arr[0];
    for (int k = 1; k < SIZE; k++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[k];
        }
    }

    std::cout << " youre min value:" << minValue << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
} // ÿ ñìîãëààààààààààààààààààààààààààààààààààààààààà
