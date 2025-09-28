#include <iostream>

using namespace std;

int main() {

    int hari;


    cout << "Masukan Hari Keberapa : ";
    cin >> hari;

    switch (hari)
    {
    case 1:
      cout << "Hari Senin Adalah Hari Ke - 1";
        break;
    case 2:
      cout << "Hari Selasa Adalah Hari Ke - 2";
        break;
    case 3:
      cout << "Hari Rabu Adalah Hari Ke - 3";
        break;
    case 4:
      cout << "Hari Kamis Adalah Hari Ke - 4";
        break;
    case 5:
      cout << "Hari Jumat Adalah Hari Ke - 5";
        break;
    case 6:
      cout << "Hari Sabtu Adalah Hari Ke - 6";
        break;
    case 7:
      cout << "Hari Minggu Adalah Hari Ke - 7";
        break;
    
    default:
    cout << "tidak ada pilihan.";
        break;
    }
}