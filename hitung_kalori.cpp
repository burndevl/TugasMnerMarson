#include <iostream>

using namespace std;

string nama;
char gender;
int umur;
float tb;
float bb;


int main() {
    
    cout << "Masukan Nama kamu : ";
    getline(cin, nama);

    cout << "Masukan gender L/P : ";
    cin >> gender;

    cout << "Masukan Umur Kamu : ";
    cin >> umur;

    cout << "Masukan tinggi badan kamu : ";
    cin >> tb;

    cout << "Masukan berat badan kamu : ";
    cin >> bb;


    float rumus_cowok = (10 * bb) + (6.25 * tb) - (5 * umur) - 5;    
    float rumus_cewek = 10 * bb + 6.25 * tb - 5 * umur - 161;
    
    if(gender == 'L') {
        cout << "\n\nHai Kaka : " << nama << endl;
        cout << "Kalori yang dibutuhkan adalah : " << rumus_cowok << "KKL";

    } else if(gender == 'P') {
        cout << "\n\nHai Kaka : " << nama << endl;
        cout << "Kalori yang dibutuhkan adalah : " << rumus_cewek << "KKL";

    } else {
         cout << "\n\nHai Kaka : " << nama;
         cout << "Kamu gapunya gender mati aja hehe.";
    }
 return 0;

}