#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double angka[5];
    double jumlah = 0;
    double rataRata;
    double standarDeviasi;
    double totalKuadrat = 0;

   
    cout << "Masukkan 5 angka:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> angka[i];

        jumlah = jumlah + angka[i];
    }

   
    rataRata = jumlah / 5;

  
    for (int i = 0; i < 5; i++) {
        totalKuadrat = totalKuadrat + pow(angka[i] - rataRata, 2);
    }

   
    standarDeviasi = sqrt(totalKuadrat / 5);

    
    cout << endl;
    cout << "===== HASIL PERHITUNGAN =====" << endl;
    cout << fixed << setprecision(2);
    cout << "Nilai rata-rata     : " << rataRata << endl;
    cout << "Standar deviasi     : " << standarDeviasi << endl;

    
    if (standarDeviasi > 2) {
        cout << "Keterangan          : Variasi Tinggi" << endl;
    }
    else {
        cout << "Keterangan          : Variasi Rendah" << endl;
    }

    return 0;
}
