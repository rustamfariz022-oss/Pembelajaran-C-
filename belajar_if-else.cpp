#include <iostream>
using namespace std;
int main(){
    int battery;
    cout<<"Berapa Baterai ponsel anda?"<<endl;
    cin>>battery;
    if (battery >100)
		{cout<<"Gak logis"<<endl;}
    else if(battery>=55 && battery<100)
		{cout<<"Jangan cas,baterai masih banyak"<<endl;}
    else if(battery<=50)
		{cout<<"Cas ponsel anda"<<endl;}
    else
		{cout<<"Ponsel lu mati kocak"<<endl;}
    return 0;
}
