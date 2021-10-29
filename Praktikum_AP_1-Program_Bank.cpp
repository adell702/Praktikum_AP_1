// Praktikum_AP_1-Program_Bank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void showmenu() {
    cout << "===========================================================" << endl;
    cout << "           Selamat Datang di ATM BANK PINTAR               " << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "Silahkan Pilih Menu di Bawah Ini Untuk Melakukan Transaksi " << endl;
    cout << "===========================================================" << endl;
    cout << " 1. Tekan (1) Cek Saldo                                    " << endl;
    cout << " 2. Tekan (2) Menabung                                     " << endl;
    cout << " 3. Tekan (3) Penarikan                                    " << endl;
    cout << " 4. Tekan (4) Keluar                                       " << endl;
    cout << "===========================================================" << endl;
}

int main()
{
    int option;
    float saldo = 2000000;

    do {
        cout << endl;
        showmenu();
        cout << "Masukan Pilihan Anda : ";
        cin >> option;
        system("cls");
        switch (option)
        {
        default:
        case 1:cout << "Saldo Kamu : " << "Rp." << fixed << saldo << endl; break;
        case 2:cout << "Jumlah Deposit : ";
            double jumlahdeposit;
            cin >> jumlahdeposit;
            saldo += jumlahdeposit;
            cout << "------------------------------------" << endl;
            cout << "Saldo Anda Sekarang : Rp." << saldo << endl;
            break;
        case 3:cout << "Jumlah Penarikan : ";
            double jumlahtarik;
            cin >> jumlahtarik;
            if (jumlahtarik <= saldo) {
                saldo -= jumlahtarik;
                cout << "Saldo Anda Sekarang : Rp." << saldo << endl;
            }
            else {
                cout << "Saldo Anda Tidak Cukup" << endl;
            }
            break;

        } 
    } while (option != 4);
}