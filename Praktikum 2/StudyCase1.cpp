#include <iostream>
#include <iomanip> // Library wajib untuk mengatur format tabel
#include <string>

using namespace std;

int main() {
    // Tentukan lebar masing-masing kolom
    
    const int wColumn = 15;

    // Header Tabel
    
    // Baris Data
    string nama;
    int jamKerja;
    long long tarif;
    long long totalGaji;
    
    cout << "masukkan nama: ";
    getline(cin, nama);
    cout << "masukkan jam kerja: ";
    cin >> jamKerja;
    cout << "masukkan tarif per jam: ";
    cin >> tarif; 

    totalGaji = jamKerja * tarif;
    
    
    cout << left << setw(wColumn)  << "Nama"
         << left << setw(wColumn)   << "Jam Kerja"
         << left << setw(wColumn) << "Tarif Per Jam"
         << left << setw(wColumn)  << "Gaji Total" 
         << endl;

    // Garis Pemisah
    cout << string(wColumn * 4, '-') << endl;

    cout << left  << setw(wColumn)  << nama
         << left << setw(wColumn) << jamKerja// Penyesuaian agar teks/angka pas di bawah header
         << left << setw(wColumn) << tarif
         << left << setw(wColumn)  << totalGaji 
         << endl;

    return 0;
}
