#include <iostream>
using namespace std;

int main(){
    int angka_awal;
    int angka_akhir;
    cout<<"Masukkan angka pertama yang ingin anda urutkan"<<endl;
    cin>>angka_awal;
    cout<<"masukkan angka akhir dari angka yang ingin anda urutkan"<<endl;
    cin>>angka_akhir;
    cout<<"urutan angka yang akan muncul\n"<<endl;

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
}