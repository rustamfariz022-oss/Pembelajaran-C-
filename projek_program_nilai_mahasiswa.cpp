#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;
int main()
{
    int jumlah_data;
    cout<<"Berapa banyak data mahasiswa yang ingin anda simpan?"<<endl;
    cin>>jumlah_data;
    cin.ignore();

    vector<int>arr(jumlah_data);
    for(int i=0;i<jumlah_data;i++){
        getline(cin,nama[i]);
    }
    //    this_thread::sleep_for(chrono::seconds(3)); kode yang berguna
}