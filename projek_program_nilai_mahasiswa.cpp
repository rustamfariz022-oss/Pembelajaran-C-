#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>

using namespace std;
int main()
{
    // variabel
    int pilih;
    int jumlah_array;
    string nama_mahasiswa;
    const int max_siswa=10;
    std::cout << "selamat datang pada sistem nilai dari kampus jaya bersama" << endl;
    cout<<"Ingin input kelas informatika atau teknik komputer?(1/2)"<<endl;
    cin>>pilih;
    switch (pilih)
    {
    case 1:
        cout<<"masukkan nama siswa dan nilai (maksimal 30 siswa)"<<endl;
        cin>>nama_mahasiswa;
        cout<<""<<endl;
        break;

    case 2:
        cout<<"masukkan nama siswa dan nilai (maksimal 30 siswa)"<<endl;
        cin>>nama_mahasiswa;
        cout<<""<<endl;
        break;
    
    default:
        break;
    }
    string name_for_clas_Informatika[10][2] = {
        {"Nama Mahasiswa"},
        {"Nilai"}
    };
    string name_for_clas_teknik_komputer[10][2] = {
        {}
    };


    std::cout << "selamat datang pada sistem nilai dari kampus jaya bersama" << endl;
    std::cout << "1.Kelas Informatika" << endl;
    std::cout << "2.Kelas Teknik Komputer" << endl;
    std::cout << "silahkan cari kelas yang ingin dicari" << endl;
    std::cin >> pilih;
    std::cout << "Mencari kelas................" << endl;
    this_thread::sleep_for(chrono::seconds(3));


}