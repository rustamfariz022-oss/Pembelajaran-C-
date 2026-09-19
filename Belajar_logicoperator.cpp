#include <iostream>
using namespace std;

//Belajar Opetator Logika//

int main(){
    //operator and( && ),butuh semua true agar pernyataan true//
    cout<<"masukkan umur anda untuk membuat sim"<<endl;
    int umur;
    bool buat_sim=true;
    cin>>umur;

    if(umur>=80 && buat_sim){
        cout<<"Anda sudah tua"<<endl;
    }
    else if(umur>=18 && buat_sim){
        cout<<"Ayo buat sim"<<endl;
    }
    else if(umur<18 && buat_sim){
        cout<<"umur belum cukup"<<endl;
    }

      //operator or( || ),hanya butuh 1 true agar pernyataan benar//
    cout<<"Masukkan ketinggian air dalam meter"<<endl;
    cout<<"Tekan tombol darurat?"<<endl;
    string pilihan;
    int meter_air;
    cin>>meter_air;
    cin>>pilihan;

    if( meter_air>=2 || pilihan=="iya"){
        cout<<"Mengaktifkan pompa air"<<endl;
    }
    else if(meter_air==0 || pilihan=="tidak"){
        cout<<"pompa tidak nyala"<<endl;
    }

        ///Operator Not(!),membalikkan kebearan. true=false false=true
    bool mobil=false;
    if(!mobil){
        cout<<"jalan"<<endl;
    }
    else{
        cout<<"anda butuh mobil"<<endl;
    }
}
