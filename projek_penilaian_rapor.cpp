#include<iostream>
using namespace std;

struct Orang{
    string nama;
    int tugas;
    int nilai_uts;
    int nilai_uas;
    double hasil;
};

void isiData(Orang data_orang[], int n) {
    data_orang[0] = {"Takbir\t", 86, 89, 85,};
    data_orang[1] = {"Rehan\t",  88, 83, 85,};
    data_orang[2] = {"Fandi\t",  87, 90, 89,};
    data_orang[3] = {"Radit\t",  81, 86, 90,};
    data_orang[4] = {"Sandi\t",  83, 85, 88,};

    for (int i=0;i<n;i++){
        data_orang[i].hasil=
            (double)(data_orang[i].tugas+
                    data_orang[i].nilai_uts+
                    data_orang[i].nilai_uas)/3;
    }
}


void tampilData(Orang data_orang[], int n) {
    for (int i = 0; i < n; i++) {
        cout << data_orang[i].nama << " | "
             << data_orang[i].tugas << " "
             << data_orang[i].nilai_uts << " "
             << data_orang[i].nilai_uas <<" "
             << " "<< data_orang[i].hasil<<"\t"
             <<""<<(data_orang[i].hasil >=85?"Lulus":"Tidak Lulus")<<endl;
    }
}

int main(){
    Orang data_orang[5];      
    isiData(data_orang, 5);
    tampilData(data_orang, 5);
    return 0;
}