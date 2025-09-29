#include <iostream>

using namespace std;

int kaos = 2500;
int baju_kasar = 7500;
int sprei = 15000;
int tas = 35000;

// costumer
int baju_a = 40;
int baju_b = 15;
int baju_c = 50;

// tambahan costumer cuci
int cuci_tas = 4;

// diskon 
float diskon10 = 0.1;
float diskon15 = 0.15;

// kering atau tidak tas nya'
bool info_tas = false;

// rumus hitung semua
int pendapatan;
int main() {

    if(info_tas == true && baju_c > 40) {
     pendapatan = (kaos * baju_a) + (kaos * baju_b) + (kaos * baju_c * diskon10) + (cuci_tas * tas * diskon15);
     cout << "Kamu mendapatkan Diskon 15% dan 10%" << endl;
     cout << "hasilnya adalah : Rp." << pendapatan;
    } else if (info_tas == false || baju_c > 40) {
     pendapatan = (kaos * baju_a) + (kaos * baju_b) + (kaos * baju_c * diskon10) + (cuci_tas * tas);
     cout << "Kamu mendapatkan Diskon 10%" << endl;
     cout << "hasilnya adalah : Rp." << pendapatan;
   } else {
     pendapatan = (kaos * baju_a) + (kaos * baju_b) + (kaos * baju_c ) + (cuci_tas * tas);
    cout << "hasilnya adalah : Rp." << pendapatan;
   }


    // cout << "pendapatan : Rp." << pendapatan;

    return 0;
}