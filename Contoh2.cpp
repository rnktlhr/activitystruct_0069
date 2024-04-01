#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};

struct Mahasiswa{
    string nim;
    string nama;
    string Alamat;
    string umur;
};

int main(){
    Mahasiswa mhs;
    cout << "Nomer Mahasiswa: ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa: ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa: " << endl;
    cout << "\t Nama Desa: ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota: ";
    cin >> mhs.alamat.kota;
    cout << "Umur Mahsiswa: ";
    cin >> mhs.umur;

    cout << "\n NIM: " << mhs.nim;
    cout << "\n Nama: " << mhs.nama;
    cout << "\n Alamat: " << mhs.Alamat;
    cout << "\n Umur: " << mhs.umur;
}