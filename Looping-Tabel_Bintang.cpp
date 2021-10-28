// Looping-Tabel_Bintang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int row = 5;
    for (int x = 1; x <= row; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << "* ";
        }
        cout << " " << endl;
    }
}