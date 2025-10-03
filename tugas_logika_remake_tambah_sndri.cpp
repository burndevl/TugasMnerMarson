#include <iostream>
using namespace std;

int main() {
    int harga_baki = 25000;
    int harga_pcs = 250;
    float diskon10 = 0.1;

    // variable dsiini sesuai soal
    int pesanan_a;    
    int jenis_a;
    int pesanan_b;
    int jenis_b;
    int kue_tambahan;
    int jenis_kue_tambahan;


    cout << "Masukan jumlah Pesanan A : ";
    cin >> pesanan_a;
    cout << "Masukan jumlah jenis kue di Pesanan A : ";
    cin >> jenis_a;
    cout << "Masukan jumlah Pesanan B : ";
    cin >> pesanan_b;
    cout << "Masukan jumlah jenis kue di Pesanan B : ";
    cin >> jenis_b;

    cout << "Masukan jumlah kue tambahan per jenis: ";
    cin >> kue_tambahan;
    cout << "Masukan jumlah jenis kue tambahan: ";
    cin >> jenis_kue_tambahan;

    // rumus hitung semua
    float total_2baki = pesanan_a * jenis_a * harga_baki; // pesanan a = baki ke 2 di soal
    float total_3baki = pesanan_b *jenis_b * harga_baki * (1 - diskon10); // pesanan b = baki ke 3 di soal
    float total_kue_tambahan = kue_tambahan * jenis_kue_tambahan * harga_pcs; // total kue

    float duit_di_terima = total_2baki + total_3baki + total_kue_tambahan; //terakhir dsiini

    cout << "Duit Yang Di Terima Adalah : Rp " << duit_di_terima << endl;

    return 0;
}
