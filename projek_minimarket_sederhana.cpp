#include <iostream>
using namespace std;
int main()
{
    /*file kali ini untuk membuat sebuah sistem
    dimana user berperan sebagai pembeli dan sistem bertugas
    untuk menghitung harga dan jumlah barang*/
    std::cout << "selamat datang pada Fariz Cafe silahkan memesan\nCafe ini menjual:" << endl;
    std::cout << "1.Air Mineral \t 3.000/pcs";
    std::cout << "2.Kopi \t 7.000/pcs";
    std::cout << "3.Snack \t 4.000/pcs";
    std::cout << "4.Gorengan \t 8.000/piring";

    // pemberian variabel pada setiap item...//
    int air = 3000;
    int kopi = 7000;
    int snack = 4000;
    int gorengan = 8000;
    int jumlah_pesanan;


    //pemisalan variabel item
    int air=1;
    int kopi=2;
    int snack=3;
    int gorengan=4;


    // pemesanan//
    char out;
    int pesanan = air, kopi, snack, gorengan;
    do
    {
        char pesan;
        do
        {
            std::cout << "Apa yang ingin anda pesan?" << endl;
            cin >> pesanan;
            cout<<"apa masih ada yang ingin anda pesan?"<<endl;
            cin>>pesan;
        } while (pesan == 'y' || pesan == 'Y');        

        std::cout << "Berapa banyak?" << endl;
        cin >> jumlah_pesanan;
        std::cout << "Apa masih ada pesanan lagi?(y/n)" << endl;
        cin >> out;
    } while (out == 'Y' || out == 'y');
    std::cout << "pesanan akan segera............" << endl;

    // proses perhitungan..
    int harga = pesanan * jumlah_pesanan;
    std::cout << "Harga yang harus dibayar adalah\n"
              << harga << endl;

    return 0;
}