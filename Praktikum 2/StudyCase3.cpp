#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int p, l, t, v, lp;

    cout << "Masukkan Panjang: ";
    cin >> p;

    cout << "Masukkan Lebar: ";
    cin >> l;

    cout << "Masukkan Tinggi: ";
    cin >> t;

    v = p*l*t;
    lp = 2*(p*t+p*l+l*t);

    cout << left << setw(15) << "Panjang"
    << left << setw(15) << "Lebar"
    << left << setw(15) << "Tingi"
    << left << setw(15) << "Volume"
    << left << setw(15) << "Luas Permukaan"
    << endl;

    cout << left << setw(15) << p
    << left << setw(15) << l
    << left << setw(15) << t
    << left << setw(15) << v
    << left << setw(15) << lp
    << endl;

    return 0;
}
