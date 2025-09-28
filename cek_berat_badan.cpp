#include <iostream>

using namespace std;

int main() {

    float bb;
    float tb;

    cout << "Masukan Berat Badan :";
    cin >> bb;
    cout << "Masukan Tinggi Badan : ";
    cin >> tb;

    tb = tb / 100.0;

    //rumus bmi
    float rumus_ideal_bb = bb / (tb * tb);

    if(rumus_ideal_bb < 18.5) {
        cout << "Kamu Kurus";
    } else if(rumus_ideal_bb < 25) {
        cout << "Kamu Normal";
    }else if(rumus_ideal_bb < 30) {
        cout << "Kamu Gemuk";
    } else {
        cout << "kamu Obesitas";
    }

     cout <<endl << rumus_ideal_bb;
    return 0;
    
}