#include <iostream>

using namespace std;


int main()  {
    string nama;
    int angka;

    cout << "Masukan Nama Kamu : ";
    getline(cin, nama);

    cout << "Masukan Angka Kamu : ";
    cin >> angka;

    if(angka % 2 == 0) {
        cout << "Angka Kamu : " << angka << " Ini Angka Genap!";
    } else {
        cout << "Angka Kamu : " << angka << " Ini Angka Ganjil!";
    }
    return 0;
}