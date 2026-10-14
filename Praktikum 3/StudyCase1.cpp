#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const int wColumn = 18;

    string nama;
    string posisi;
    int jamKerja;
    long long tarif;
    long long totalGaji;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan posisi (Magang/Junior/Senior/Team Leader/Kepala Departemen): ";
    getline(cin, posisi);

    cout << "Masukkan jam kerja: ";
    cin >> jamKerja;

    // Menentukan tarif berdasarkan posisi
    if (posisi == "Magang") {
        tarif = 15000;
    } 
    else if (posisi == "Junior") {
        tarif = 25000;
    } 
    else if (posisi == "Senior") {
        tarif = 35000;
    } 
    else if (posisi == "Team Leader") {
        tarif = 50000;
    } 
    else if (posisi == "Kepala Departemen") {
        tarif = 75000;
    } 
    else {
        cout << "Posisi tidak valid!" << endl;
        return 0;
    }

    totalGaji = jamKerja * tarif;

    // Header tabel
    cout << endl;
    cout << left << setw(wColumn) << "Nama"
         << left << setw(wColumn) << "Posisi"
         << left << setw(wColumn) << "Jam Kerja"
         << left << setw(wColumn) << "Tarif/Jam"
         << left << setw(wColumn) << "Gaji Total"
         << endl;

    // Garis pemisah
    cout << string(wColumn * 5, '-') << endl;

    // Data karyawan
    cout << left << setw(wColumn) << nama
         << left << setw(wColumn) << posisi
         << left << setw(wColumn) << jamKerja
         << left << setw(wColumn) << tarif
         << left << setw(wColumn) << totalGaji
         << endl;

    return 0;
}
