#include <iostream>
using namespace std;

int main()
{
    // rakit pc//
    int budget;
    int minimal=29000000;
    cout << "Masukkan budget anda untuk rakit PC dengan spek: \nAMD RYZEN 7 5700X \nRTX5060TI\nRam 16GB DDR5\nSSD 1TB\nDAN LOOKS MAHAL" << endl;
    cin>>budget;
    
    int hasil=budget-minimal;
    cout<<"anda perlu "<<hasil<<" lagi"<<endl;
    return 0;
}
