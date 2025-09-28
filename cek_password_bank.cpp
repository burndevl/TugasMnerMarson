#include <iostream>

using namespace std;

int main() {
    //password dicek 
    string password = "tugas";
    string username;
    string cekpass;


    cout << "Masukan Username : ";
    getline(cin, username);
    cout << "Masukan Password : ";
    getline(cin, cekpass);


    if(cekpass == password) {
        cout << "Login Success!";
    }else {
        cout << "Password salah!, Login Di Tolak";
    }
    return 0;
}