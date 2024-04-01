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
    Mahasiswa mhs[3];
    for(int i=0;i<3;i++){
        cout << "Data ke- " << (i+1)<<":"<<endl;
        cout << "Nomer Mahasiswa: ";
        getline(cin, mhs[i].nim);
        cout << "Nama Mahasiswa: ";
        cin >> mhs[i].nama;
        getline(cin, mhs[i].nama);
        cout << "Alamat Mahasiswa: " << endl;
        cout << "\t Nama Desa: ";
        cin >> mhs[i].Alamat.desa;
        cout << "\t Nama Kota: ";
        cin >> mhs[i].Alamat.kota;
        cout << "Umur Mahsiswa: ";
        cin >> mhs[i].umur;
    }

    for(int i=0;i<3;i++){
    cout << "\n NIM: " << mhs[i].nim;
    cout << "\n Nama: " << mhs[i].nama;
    cout << "\n Alamat: ";
    cout << "\n \t Desa: " << mhs[i].Alamat.desa;
    cout << "\n \t Kota: " << mhs[i].Alamat.kota;
    cout << "\n Umur: " << mhs[i].umur;
    }
}