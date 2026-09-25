<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    int angka_awal;
    int angka_akhir;
    cout<<"Masukkan angka pertama yang ingin anda urutkan"<<endl;
    cin>>angka_awal;
    cout<<"masukkan angka akhir dari angka yang ingin anda urutkan"<<endl;
    cin>>angka_akhir;

    if(angka_awal<angka_akhir){
        for(int i=angka_awal;i<=angka_akhir;i++){
            cout<<i<<endl;
        }
    }
    
        else if(angka_awal>angka_akhir){
            for(int i=angka_awal;i>=angka_akhir;i--){
                cout<<i<<endl;
            }
        }

        else{
            cout<<"mohon periksa lagi input anda"<<endl;
        }
    return 0;
=======
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
>>>>>>> 3dfa4c8d7ac874eb8000dfd2d8645ae08f01064b
}