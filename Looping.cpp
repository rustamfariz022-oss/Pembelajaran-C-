#include <iostream>
using namespace std;

int main() {
    //looping sederhana menggunakan for loop//
    cout<<"urutan angka 0-30\n";
    for(int i =0;i<=10;i++){
        cout<<i<<endl;
    }

    //tabel perkalian menggunakan for loop//
    cout<<"tabel perkalian seru";
    int angka;
    cout<<"masukkan angka yang ingin anda kalikan"<<endl;
    cin>>angka;
    
    for(int i =1;i<=50;i++){
        int hasil=angka*i;
        cout<<angka<<"*"<<i<<"="<<hasil<<endl;
    }
    return 0;
}