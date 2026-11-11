#include <iostream>
#include <iomanip>
using namespace std;


double hitungTotalSetelahDiskon(double* harga, int n, int index = 0) {
    if (index == n) {
        return 0;
    }


    double diskon = 0;


    if (harga[index] > 500000) {
        diskon = 0.10;
    }
    else if (harga[index] >= 500000) {
        diskon = 0.05;
    }


    double hargaAkhir = harga[index] - (harga[index] * diskon);


    cout << "Diskon untuk barang " << index + 1 << ": ";


    if (diskon == 0) {
        cout << "Tidak ada diskon";
    }
    else {
        cout << diskon * 100 << "%";
    }


    cout << endl;


    return hargaAkhir +
           hitungTotalSetelahDiskon(harga, n, index + 1);
}


int main() {
    int n;


    cout << "Masukkan jumlah barang: ";
    cin >> n;


    if (n < 0) {
        cout << "Jumlah barang tidak valid!" << endl;
        return 0;
    }


    if (n == 0) {
        cout << "Tidak ada barang yang dijual." << endl;
        return 0;
    }


    double* harga = new double[n];
    double totalAwal = 0;


    for (int i = 0; i < n; i++) {
        cout << "Masukkan harga barang " << i + 1 << ": ";
        cin >> harga[i];


        if (harga[i] < 0) {
            cout << "Harga tidak boleh negatif!" << endl;
            delete[] harga;
            return 0;
        }
        totalAwal += harga[i];
    }


    cout << fixed << setprecision(0);


    cout << "\nHasil perhitungan diskon:" << endl;


    double total = hitungTotalSetelahDiskon(harga, n);


    cout << "\nTotal harga setelah diskon: Rp" << total << endl;


    if (total < totalAwal) {
        cout << "Diskon telah diterapkan." << endl;
    }
    else {
        cout << "Tidak ada diskon yang diterapkan." << endl;
    }


    delete[] harga;


    return 0;
}
