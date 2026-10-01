#include <iostream>
using namespace std;
int main()
{
    /*file kali ini untuk membuat sebuah sistem 
    dimana user berperan sebagai pembeli dan sistem bertugas 
    untuk menghitung harga dan jumlah barang*/
    cout<<"selamat datang pada Fariz Cafe silahkan memesan\nCafe ini menjual:"<<endl;
    cout<<"1.Air Mineral \t 3.000/pcs";
    cout<<"2.Kopi \t 7.000/pcs";
    cout<<"3.Snack \t 4.000/pcs";
    cout<<"4.Gorengan \t 8.000/piring";

    //pemberian variabel pada setiap item...//
    double air=3.000;
    double kopi=7.000;
    double snack=4.000;
    double gorengan=8.000;

    //pemesanan//
    char out;
    do{
    cout<<"apa yang ingin anda pesan?"<<endl;
    int pesanan=air,kopi,snack,gorengan;
    cin>>pesanan;
    cout<<"Berapa banyak?"<<endl;
    cin>>out;
    }while(out=='Y'||out=='y');


}