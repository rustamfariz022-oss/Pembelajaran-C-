#include <iostream>
using namespace std;

int main()
{
    char ulang;
    do{
    cout << "list minimal pembelian untuk mendapatkan diskon:\nUntuk pembelian Rp50.000,akan dapat diskon 5%\nUntuk pembelian Rp100.000,dapat diskon 15%" << endl;
    cout << "\n\nmasukkan total pembayaran untuk mendapatkan diskon" << endl;
    float harga_awal;
    cin >> harga_awal;

    if (harga_awal >= 100000)
    {
        double harga_setelah_diskon15 = harga_awal * 0.85;
        cout << "harga setelah diskon(15%): " << harga_setelah_diskon15 << endl;
    }
    else if (harga_awal >= 50000)
    {
        double harga_setelah_diskon5 = harga_awal * 0.95;
        cout << "Harga setelah diskon(5%): " << harga_setelah_diskon5 << endl;
    }
    else
    {
        cout << "anda tidak dapat diskon,jika ingin dapat diskon tambah barang yang ingin anda beli" << endl;
    }
    cout<<"apa masih ada transaksi lagi?(y/n)";
    cin>>ulang;
    }while (ulang=='y'||ulang=='Y');
    cout<<"terima kasih telah berbelanja"<<endl;

    return 0;
}