#include <iostream>

using namespace std;

int Kue = 5; // 5jenis kue di gabung dalam 1variable hemat

int baki2 = 2;
int baki3 = 3;


int harga_baki = 25000; //harga per baki
int harga_pcs = 250; //harga per pcs

int kue_tambahan = 10;

float diskon10 = 0.1;

int main() {

    float total_2baki = (baki2 * baki2 * harga_baki); // jumlahkan 2 baki * 2 Jenis Kue = 4 lalu di kalikan harganya
    float total_3baki = (baki3 * baki3 * harga_baki) * (1 - diskon10); // jumlahkan 3 baki * 3 Jenis Kue = 9 lalu di kalikan harganya
    float total_kue_tambahan = (kue_tambahan * Kue * harga_pcs); // jumlahkan 10 kue tambahan di masing" jenis jadi 10*5 = 50 * harga / pcs
    float duit_di_terima = total_2baki + total_3baki + total_kue_tambahan; // totalkan semua 

    cout << "Duit Yang Di Terima Adalah : Rp " << duit_di_terima << endl;


    return 0;
}