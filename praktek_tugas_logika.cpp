#include <iostream>

using namespace std;
    // variable harga
    int hargacucur;
    int hargabiapong;
    int hargabalapis;
    int harganasijaha;
    int hargarisol;
    
    // variable kue
    int cucur;
    int biapong;
    int balapis;
    int nasijaha;
    int risol;
    
    //harga perbakul 
    int bakul = 25000;
     
    //harga per bakul
    int harga_per_bakul;

    // diskon 10%
    double diskon = 0.1;
     


int main() {

    // inisiasi masukan harga ke kue
    cout << "Masukan harga Kue cucur : ";
    cin >> hargacucur;

    cout << "Masukan harga Kue Biapong : ";
    cin >> hargabiapong;

    cout << "Masukan harga Kue Balapis : ";
    cin >> hargabalapis;

    cout << "Masukan harga Kue Nasi Jaha : ";
    cin >> harganasijaha;

    cout << "Masukan harga Kue Risol : ";
    cin >> hargarisol;

    cout << "Masukan Harga Perbakul : ";
    cin >> harga_per_bakul;

    // output harga
    cout << "\n\nBerikut harga Kue / Pcs : " << endl;
    cout << "Cucur : Rp." << hargacucur << endl;
    cout << "Biapong : Rp." << hargabiapong << endl;
    cout << "Balapis : Rp." << hargabalapis << endl;
    cout << "nasi Jaha : Rp." << harganasijaha << endl;
    cout << "Risol : Rp." << hargarisol << endl;
    cout << "harga kue / Bakul : Rp." << harga_per_bakul << endl <<endl;


    // masukan jumlah belanja kue
    cout << "Masukan Jumlah Kue Yang Ingin Di Beli" << endl;

    cout << "Kue Cucur : " ;
    cin >> cucur; 
    cout << "Kue biapong : ";
    cin >> biapong; 
    cout << "Kue Balapis : ";
    cin >> balapis; 
    cout << "Kue nasi jaha : ";
    cin >> nasijaha; 
    cout << "Kue Risol: " ;
    cin >> risol; 

    // hasil Jumlah kue dan harga semua kue yang di kalkulasi disini
    int JumlahKue = cucur + biapong + balapis + nasijaha + risol;
    int Hitung_pembayaran = (cucur * hargacucur) + (biapong * hargabiapong) + (balapis * hargabalapis) + (nasijaha * harganasijaha) + (risol * hargarisol);
    
    // rumus disini
    long hasil = Hitung_pembayaran - (Hitung_pembayaran * diskon);
    int jumlah_bakul = Hitung_pembayaran / harga_per_bakul;

    if(Hitung_pembayaran >= harga_per_bakul * 3) {

        cout << "Kamu Membeli Kue Sebanyak : " << JumlahKue << " Pcs";
        cout << "\nJumlah Bakul : " << jumlah_bakul;
        cout << "\nHarga Yang Harus Di Bayarkan adalah : Rp." << Hitung_pembayaran << endl;
        cout << "Tapi kamu mendapatkan Diskon 10% Jadi Hanya Membayarkan : Rp." << hasil;
        // cout << "\nKamu mendapatkan Diskon Sebesar : " << diskon << endl;
    } else {
        cout << "\nKamu Membeli Kue Sebanyak : " << JumlahKue << " Pcs";
        cout << "\nJumlah Bakul : " << jumlah_bakul;
        cout << "\nHarga Yang Harus Di Bayarkan Adalah : Rp. " << Hitung_pembayaran;
    }




    // cout << endl <<endl << JumlahKue << endl << Hitung;
    // cout << kue_tambahan;
    return 0;
}