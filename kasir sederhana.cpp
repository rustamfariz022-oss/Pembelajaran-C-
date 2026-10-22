#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;
int main()
{
    int pilihan1;
    int pilihan2;
    int jumlah;
    string answer;
    cout << "Ingin Berbelanja?\n1=iya\n2=tidak" << endl;
    cin >> pilihan1;
    switch (pilihan1)
    {
    case 1:
        cout << "Memproses sistem............" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Selamat datang di Toko Fariz,kami menjual:" << endl;
        cout << "Pensil=Rp1000\npulpen=Rp2000\nbuku=Rp5000\nbinder=Rp7000" << endl;

        cout << "apa yang ingin anda pesan?\n1=Pensil\n2=Pulpen\n3=Buku\n4=Binder" << endl;
        cin >> pilihan2;
        switch (pilihan2)
        {
        case 1:
            cout<<"berapa banyak?"<<endl;
            cin>>jumlah;
            break;
        case 2:
            cout<<"berapa banyak?"<<endl;
            cin>>jumlah;
            break;
        case 3:
            cout<<"berapa banyak?"<<endl;
            cin>>jumlah;
            break;
        case 4:
            cout<<"berapa banyak?"<<endl;
            cin>>jumlah;
            break;

        default:
            break;
        }

        do
        {

        } while (answer == "y" || answer == "Y");

        break;

    case 2:
        cout << "Program selesai" << endl;
        break;

    default:
        break;
    }
}