#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    float hargaBarang, diskon, hargaStlhDiskon;

    cout << "Harga Barang: ";
    cin >> hargaBarang;

    cout << "Diskon: ";
    cin >> diskon;

    hargaStlhDiskon = hargaBarang - (hargaBarang * diskon/100);

    cout << "Harga Awal:  Rp. " << hargaBarang << endl;
    cout << "Diskon: " << diskon << endl;
    cout << fixed << setprecision(2);
    cout << "Harga Setelah Diskon: Rp." << hargaStlhDiskon << endl;

    return 0;
}
