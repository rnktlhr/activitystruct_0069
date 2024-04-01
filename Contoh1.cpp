#include <iostream>
using namespace std;

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

}