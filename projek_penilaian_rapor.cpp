#include<iostream>
using namespace std;

struct nama_mhs{
    string nama;
}

struct Orang{
    int tugas;
    int nilai_uts;
    int nilai_uas;
};

// void isiData(Orang data_orang[], int n) {
//     data_orang[0] = {"Takbir\t", 86, 84, 85};
//     data_orang[1] = {"Rehan\t",  88, 83, 85};
//     data_orang[2] = {"Fandi\t",  87, 90, 89};
//     data_orang[3] = {"Radit\t",  81, 86, 90};
//     data_orang[4] = {"Sandi\t",  83, 85, 88};
// }


void tampilData(Orang data_orang[], int n) {
    for (int i = 0; i < n; i++) {
        cout << data_orang[i].nama << " | "
             << data_orang[i].tugas << " "
             << data_orang[i].nilai_uts << " "
             << data_orang[i].nilai_uas << endl;
    }
}

void pointerData(Orang data)


int main(){
    Orang data_orang[5];      // deklarasi di main
    isiData(data_orang, 5);   // isi lewat function
    tampilData(data_orang, 5);
    return 0;
}