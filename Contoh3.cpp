#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};

struct Mahasiswa{
    string nim;
    string nama;
    DetailAlamat Alamat;
    string umur;
};

int main(){
    Mahasiswa mhs;
    cout << "Nomer Mahasiswa: ";
    getline(cin, mhs.nim);
    cout << "Nama Mahasiswa: ";
    cin >> mhs.nama;
    getline(cin, mhs.nama);
    cout << "Alamat Mahasiswa: " << endl;
    cout << "\t Nama Desa: ";
    cin >> mhs.Alamat.desa;
    cout << "\t Nama Kota: ";
    cin >> mhs.Alamat.kota;
    cout << "Umur Mahsiswa: ";
    cin >> mhs.umur;

    cout << "\n NIM: " << mhs.nim;
    cout << "\n Nama: " << mhs.nama;
    cout << "\n Alamat: ";
    cout << "\n \t Desa: " << mhs.Alamat.desa;
    cout << "\n \t Kota: " << mhs.Alamat.kota;
    cout << "\n Umur: " << mhs.umur;
}