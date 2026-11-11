#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct Produk {
    string nama;
    long long harga;
    int jumlahTerjual;
};


int main() {
    int n;


    cout << "Masukkan jumlah produk: ";
    cin >> n;


    // Menangani jumlah produk 0 atau negatif
    if (n <= 0) {
        cout << "Tidak ada produk yang dianalisis." << endl;
        return 0;
    }


    // Membuat array dinamis
    Produk* produk = new Produk[n];


    // Input data produk
    cout << "\nMasukkan data produk:\n";


    for (int i = 0; i < n; i++) {
        cout << "\nProduk " << i + 1 << endl;


        cout << "Nama produk: ";
        getline(cin >> ws, produk[i].nama);


        cout << "Harga satuan: Rp ";
        cin >> produk[i].harga;


        cout << "Jumlah terjual: ";
        cin >> produk[i].jumlahTerjual;
    }


    // Inisialisasi variabel perhitungan
    long long totalPendapatan = 0;
    long long pendapatanTertinggi = 0;
    int indeksTertinggi = 0;


    // Menghitung pendapatan setiap produk
    for (int i = 0; i < n; i++) {
        long long pendapatan =
            produk[i].harga * produk[i].jumlahTerjual;


        totalPendapatan += pendapatan;


        if (i == 0 || pendapatan > pendapatanTertinggi) {
            pendapatanTertinggi = pendapatan;
            indeksTertinggi = i;
        }
    }


    // Menghitung rata-rata
    double rataRata = (double) totalPendapatan / n;


    // Menampilkan hasil
    cout << "\n========== HASIL ANALISIS ==========\n";


    cout << "Total pendapatan: Rp "
         << totalPendapatan << endl;


    cout << fixed << setprecision(2);


    cout << "Rata-rata pendapatan per produk: Rp "
         << rataRata << endl;


    cout << "Produk dengan pendapatan tertinggi: "
         << produk[indeksTertinggi].nama
         << " (Rp " << pendapatanTertinggi << ")"
         << endl;


    // Menghapus array dinamis
    delete[] produk;


    return 0;
}
