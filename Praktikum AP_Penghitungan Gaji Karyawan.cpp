// Praktikum AP_Penghitungan Gaji Karyawan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

int main()
{
    cout << "Program Menghitung Gaji Karyawan" << endl;
    cout << "---------------------------------" << endl;
    cout << endl;

    string nama, bulan;
    char golongan;
    int jam_kerja, gapok, tahun, upah_lembur_jam, jam_lembur, upah_lembur, total_gaji;

    cout << "Masukkan Nama Karyawan     : ";
    getline(cin, nama);
    cout << "Masukkan Golongan          : ";
    cin >> golongan;
    cout << "Masukkan Jumlah Jam Kerja  : ";
    cin >> jam_kerja;
    cout << "Masukkan Bulan             : ";
    cin >> bulan;
    cout << "Masukkan Tahun             : ";
    cin >> tahun;

    switch (golongan) {
    case '1':
        gapok = 1000000;
        upah_lembur_jam = 10000;
        break;
    case '2':
        gapok = 2000000;
        upah_lembur_jam = 20000;
        break;
    case'3':
        gapok = 3000000;
        upah_lembur_jam = 30000;
        break;
    case'4':
        gapok = 4000000;
        upah_lembur_jam = 40000;
        break;
    case'5':
        gapok = 5000000;
        upah_lembur_jam = 50000;
        break;
    }
    {
        if (jam_kerja > 150) {
            jam_lembur = jam_kerja - 150;
        }
        else {
            jam_lembur = 0;
        }
        upah_lembur = jam_lembur * upah_lembur_jam;
        total_gaji = gapok + upah_lembur;
    }
    cout << "_____________________________________" << endl;
    cout << "   Gaji Bulan " << bulan <<" " << tahun<<endl;
    cout << "_____________________________________" << endl;
    cout << endl;
    cout << "Nama Karyawan      : " << nama << endl;
    cout << "Golongan           : " << golongan << endl;
    cout << "Jumlah Jam Kerja   : " << jam_kerja << endl;
    cout << "Gaji Pokok         : Rp. " << gapok << endl;
    cout << "Upah Lembur        : Rp. " << upah_lembur << endl;
    cout << endl;
    cout << "Total Gaji yang Diterima Bulan Ini : Rp. " << total_gaji << endl;
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
