#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    string namaBarang;
    float hargaBarang, diskon, hargaStlhDiskon;

    cout << "Nama Barang: ";
    getline(cin, namaBarang);

    // Menentukan harga berdasarkan nama barang
    if (namaBarang == "Kipas Angin") {
        hargaBarang = 250000;
    }
    else if (namaBarang == "Lampu") {
        hargaBarang = 50000;
    }
    else if (namaBarang == "Rice Cooker") {
        hargaBarang = 350000;
    }
    else if (namaBarang == "Setrika") {
        hargaBarang = 200000;
    }
    else if (namaBarang == "Kasur") {
        hargaBarang = 750000;
    }
    else if (namaBarang == "Bantal") {
        hargaBarang = 100000;
    }
    else if (namaBarang == "Ember") {
        hargaBarang = 50000;
    }
    else if (namaBarang == "Meja") {
        hargaBarang = 400000;
    }
    else if (namaBarang == "Kursi") {
        hargaBarang = 250000;
    }
    else if (namaBarang == "Rak") {
        hargaBarang = 300000;
    }
    else {
        cout << "Barang tidak tersedia!" << endl;
        return 0;
    }

    cout << "Diskon (%): ";
    cin >> diskon;

    hargaStlhDiskon = hargaBarang - (hargaBarang * diskon / 100);

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Nama Barang: " << namaBarang << endl;
    cout << "Harga Awal: Rp. " << hargaBarang << endl;
    cout << "Diskon: " << diskon << "%" << endl;
    cout << "Harga Setelah Diskon: Rp. " << hargaStlhDiskon << endl;

    return 0;
}
