#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;
int main()
{
    // variabel
    int pilih;
    string name_for_clas_Informatika[5][2] = {
        {"Nama", "Nilai"},
        {"agus", "81"},
        {"dito", "78"},
        {"reski", "81"},
        {"bayu", "83"},
    };
    string name_for_clas_teknik_komputer[5][2] = {
        {"Nama", "Nilai"},
        {"adit", "91"},
        {"agung", "79"},
        {"farel", "80"},
        {"andi", "88"},
    };


    std::cout << "selamat datang pada sistem nilai dari kampus jaya bersama" << endl;
    std::cout << "1.Kelas Informatika" << endl;
    std::cout << "2.Kelas Teknik Komputer" << endl;
    std::cout << "silahkan cari kelas yang ingin dicari" << endl;
    std::cin >> pilih;
    std::cout << "Mencari kelas................" << endl;
    this_thread::sleep_for(chrono::seconds(3));

    switch (pilih)
    {
    case 1:
        std::cout << "Nilai Kelas Informatika" << endl;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                std::cout << name_for_clas_Informatika[i][j] << " ";
            }
            std::cout << endl;
        }

        break;

    case 2:
        std::cout << "Nilai Kelas Teknik Komputer" << endl;
        for(int i=0;i<2;i++){
            for(int j=0;j<5;j++){
                std::cout<<name_for_clas_teknik_komputer[i][j]<< " ";
            }
            std::cout<<endl;
        }
        break;

    default:
        std::cout << "Kelas tidak ditemukan,program dihentikan" << endl;
        break;
    }
}