#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double jarak, konsumsi, hargaPerLiter;
    double literDibutuhkan, totalBiaya;

    cout << "Masukkan jarak tempuh (km): ";
    cin >> jarak;
    
    cout << "Masukkan konsumsi bahan bakar (km/liter)   : ";
    cin >> konsumsi;
    
    cout << "Masukkan harga bahan bakar per liter (Rp)  : ";
    cin >> hargaPerLiter;

    if (konsumsi <= 0) {
        cout << "\nError: Konsumsi bahan bakar harus lebih dari 0!" << endl;
        return 1;
    }

    literDibutuhkan = jarak / konsumsi;
    totalBiaya = literDibutuhkan * hargaPerLiter;

    cout << "\nRincian Perjalanan" << endl;

    cout << fixed << setprecision(2); 
    cout << "Bahan bakar yang dibutuhkan : " << literDibutuhkan << " liter" << endl;
    cout << "Total Biaya Bahan Bakar     : Rp " << totalBiaya << endl;

    cout << "Status Efisiensi            : ";
    if (konsumsi > 15) {
        cout << "Efisien" << endl;
    } else if (konsumsi >= 10 && konsumsi <= 15) {
        cout << "Cukup Efisien" << endl;
    } else {
        cout << "Boros" << endl;
    }

    return 0;
}
