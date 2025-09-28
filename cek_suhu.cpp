#include <iostream>

using namespace std;

int main() {

    int suhu;

    cout << "Masukan Suhu cuaca di tempat Kamu : ";
    cin >> suhu;

    if(suhu >= 35) {
        cout << "Suhu Di sana Sangat Panas!";
    } else if (suhu >=30) {
        cout << "Suhu Di sana Panas!";
    } else if (suhu >= 25) {
        cout << "Suhu Di sana Normal!";
    } else if (suhu >= 20) {
        cout << "Suhu Di sana Sejuk!";
    } else if (suhu >= 15) {
        cout << "Suhu Di sana Dingin!";
    } else if (suhu >=1) {
        cout << "Suhu Di sana Sangat Dingin!";
    } else {
        cout << "Suhu tidak valid";
    }
}