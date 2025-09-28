#include <iostream>

using namespace std;

int main() {

    string nama_absen[10] = {"Johanes", "Jayden", "Gabriel", "Revan", "Jefrael"};

    int no_absen;

    cout << "Masukan Nomor Absen Kamu : ";
    cin >> no_absen;

    if (no_absen >= 1 && no_absen <= 5) {
        cout << "No absen Kamu : " << no_absen << endl << "Nama Kamu : " << nama_absen[no_absen - 1]; // dikurang 1 karna index kan mulai dari 0
    }
     
}