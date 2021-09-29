// Praktikum AP 1 - Soal Nomer 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    float b1, b2, b3;
    cout << "---MENGHITUNG NILAI RATA-RATA---" << endl << endl;
    cout << "Masukkan nilai ulangan harian : ";
    cin >> b1;
    cout << "Masukkan Nilai UTS : ";
    cin >> b2;
    cout << "Masukkan Nilai UAS : ";
    cin >> b3;
    cout << "Rata-Rata Nilainya adalah : " << (b1 + b2 + b3) / 3 << endl;
}
