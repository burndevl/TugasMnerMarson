#include <iostream>

using namespace std;


int main() {

    string nama;
    int umur;

    cout << "Masukan Nama Kamu : ";
    getline(cin, nama);

    cout << "Masukan Umur Kamu : ";
    cin >> umur;

    if(umur >= 17) {
        cout << "\nHai : " << nama <<endl;
        cout << "Usia Kamu : " << umur << endl << " Sudah Mencukupi Membuat KTP";
    } else {
        cout << "\nHai : " << nama <<endl;
        cout << "usia Kamu : " << umur << endl << " Belum mencukupi Membuat KTP";
    }


}