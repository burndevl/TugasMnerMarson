#include <iostream>
using namespace std;

int main() {
    string nama;
    int umur;

    cout << "Masukkan Nama Kamu: ";
    getline(cin, nama);

    cout << "Masukkan Umur Kamu: ";
    cin >> umur;

    cout << "\nHallo: " << nama << endl;
    cout << "Umur Kamu: " << umur << endl;

    if (umur >= 18) {
        cout << "Kamu Di Kategori: Dewasa" << endl;
    } else if (umur >= 12) {
        cout << "Kamu Di Kategori: Remaja" << endl;
    } else if (umur >= 5) {
        cout << "Kamu Di Kategori: Anak-anak" << endl;
    } else if (umur >= 2) {
        cout << "Kamu Di Kategori: Balita" << endl;
    } else if (umur >= 0) {
        cout << "Kamu Di Kategori: Bayi" << endl;
    } else {
        cout << "Kamu tidak punya Umur Inailahi" << endl;
    }

    return 0;
}
