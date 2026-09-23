#include <iostream>
using namespace std;

int main(){
    int battery;
    int min=30;
    cout<<"Berapa Baterai ponsel anda?"<<endl;
    cin>>battery;

    if (battery >100){
        cout<<"Gak logis"<<endl;
    }
    else if(battery>75 && battery<100){
        cout<<"Jangan cas,baterai masih banyak"<<endl;
    }
    else if(battery<=min){
        cout<<"Cas ponsel anda"<<endl;
    }
    else{
        cout<<"Ponsel lu mati kocak"<<endl;
    }
    return 0;
}