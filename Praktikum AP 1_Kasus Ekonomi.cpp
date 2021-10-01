// Praktikum AP 1_Kasus Ekonomi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    float q, w, e, r, t, y, u;
    q = 56700000;
    w = 0.06;
    e = 3;
    r = 2;
    t = q - ((q * w) * e);
    y = q * w;
    u = y * 6;
    cout << "Tabungan seorang nasabah akan menjadi Rp.56.700.000 tiga tahun yang akan datang. Jika tingkat bunga bank yang berlaku 6% pertahun, Berapa tabungan nasabah tersebut pada saat sekarang?";
    cout << fixed << "Setiap tahun mendapatkan bunga Rp." << y << endl;
    cout << fixed << "Maka bunga selama 3 tahun sebanyak Rp." << (q * w) * e << endl;
    cout << fixed << "Uang awal yang dimiliki nasabah saat ini adalah Rp." << t << endl;
    cout << endl;
    cout << "Apabila pembayaran bunga tidak pertahun tetapi per semester berapa tabungan nasabah tersebut pada saat sekarang?";
    cout << fixed << "Uang awal nasabah Rp." << t << endl;
    cout << fixed << "Setiap semester mendapatkan bunga Rp." << y << endl;
    cout << fixed << "Total bunga selama 3 tahun (6 semester) Rp." << y * 6 << endl;
    cout << fixed << "Maka total uang yang dimiliki nasabah 3 tahun yang akan datang adalah Rp." << q - u << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
