#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*file kali ini untuk membuat sebuah sistem
    dimana user berperan sebagai pembeli dan sistem bertugas
    untuk menghitung harga dan jumlah barang*/
    std::cout << "selamat datang pada Fariz Cafe silahkan memesan\nCafe ini menjual:" << endl;
    std::cout << "1.Air Mineral 3.000/pcs\n";
    std::cout << "2.Kopi 7.000/pcs\n";
    std::cout << "3.Snack 4.000/pcs\n";
    std::cout << "4.Gorengan 8.000/piring\n";

    // pemberian variabel pada setiap item...//
    int air_price= 3000;
    int kopi_price= 7000;
    int snack_price= 4000;
    int gorengan_price= 8000;
    int jumlah_pesanan;
    int pesanan;



    // pemesanan//
    string out;
    do
    {
        char pesan;
        do
        {
            std::cout << "Apa yang ingin anda pesan?\n 1 untuk air mineral \n 2 untuk kopi\n 3 untuk snack\n 4 untuk gorengan" << endl;
            cin >> pesanan;
            cout<<"apa masih ada yang ingin anda pesan?"<<endl;
            cin>>pesan;
        } while (pesan == 'y' || pesan == 'Y');        

        std::cout << "Berapa banyak?" << endl;
        cin >> jumlah_pesanan;
        std::cout << "Apa masih ada pesanan lagi?(y/n)" << endl;
        cin >> out;
    } while (out == "Y" || out == "y");
    std::cout << "pesanan akan segera dibuat............" << endl;

    // proses perhitungan..
    int harga = pesanan * jumlah_pesanan;
    std::cout << "Harga yang harus dibayar adalah\n"
              << harga << endl;

    return 0;
}