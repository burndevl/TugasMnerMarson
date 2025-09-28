#include <iostream>

using namespace std;

int main() {

    float ipk;

    cout << "Masukan IPK Kamu : ";
    cin >> ipk;

    if(ipk >= 4) {
    cout << "IPK KAMU " << ipk << " Kamu Dapat A !!!";

    } else if (ipk >=3) {
    cout << "IPK KAMU " << ipk << " Kamu Dapat B !!!";

    } else if (ipk >=2){
    cout << "IPK KAMU " << ipk << " Kamu Dapat C !!!";

    } else if (ipk >=1){
    cout << "IPK KAMU " << ipk << " Kamu Dapat D !!!";

    } else {
    cout << "IPK KAMU " << ipk << " Kamu Dapat E !!!";

    }
    
}