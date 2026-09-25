#include <iostream>
using namespace std;

int main(){
    //membuat loop//
    //tabel perkalian menggunakan loop//
    int angka; 
    int batas;                     //input angka agar dapat melakukan perhitungan...
    cout<<"======TABEL PERKALIAN======"<<endl;
    cout<<"Masukkan angka untuk tabel perkalian"<<endl;
    cin>>angka;
    cout<<"Masukkan batasan untuk tabel perkalian"<<endl;
    cin>>batas;                    //input untuk batas tabel perkalian.....


    for(int i=1;i<=batas;i++){          //loop agar tidak menulis kode satu persatu
        int perkalian=i*angka;      //proses perhitungan 
        cout<<i<<"*"<<angka<<"="<<perkalian<<endl;
    }
}