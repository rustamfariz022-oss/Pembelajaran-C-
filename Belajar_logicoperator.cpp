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
}