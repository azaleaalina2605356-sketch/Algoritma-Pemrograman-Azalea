#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    // Variabel untuk menyimpan total pengeluaran setiap kategori
    double makanan = 0;
    double transportasi = 0;
    double hiburan = 0;
    double lainnya = 0;

    // Variabel untuk menyimpan pengeluaran terbesar
    double pengeluaranTerbesar = 0;
    string kategoriTerbesar;

    // Perulangan untuk mencatat pengeluaran selama 7 hari
    for (int hari = 1; hari <= 7; hari++) {

        string kategori;
        double jumlah;

        cout << "\n============================================\n";
        cout << "           PENGELUARAN HARI KE-" << hari << "\n";
        cout << "============================================\n";

        // Meminta kategori pengeluaran
        cout << "Kategori (Makanan/Transportasi/Hiburan/Lain-lain): ";
        cin >> ws;
        getline(cin, kategori);

        // Meminta jumlah pengeluaran
        cout << "Jumlah pengeluaran: Rp ";
        cin >> jumlah;

        // Mengecek kategori dan menambahkan jumlahnya
        if (kategori == "Makanan" || kategori == "makanan") {
            makanan += jumlah;
        }
        else if (kategori == "Transportasi" || kategori == "transportasi") {
            transportasi += jumlah;
        }
        else if (kategori == "Hiburan" || kategori == "hiburan") {
            hiburan += jumlah;
        }
        else if (kategori == "Lain-lain" || kategori == "lain-lain") {
            lainnya += jumlah;
        }
        else {
            cout << "Kategori tidak dikenali!\n";
        }

        // Mengecek apakah pengeluaran hari ini adalah yang terbesar
        if (jumlah > pengeluaranTerbesar) {
            pengeluaranTerbesar = jumlah;
            kategoriTerbesar = kategori;
        }
    }

    // Menghitung total seluruh pengeluaran
    double totalSeminggu = makanan + transportasi + hiburan + lainnya;

    // Mencari kategori dengan total pengeluaran terbesar
    double totalKategoriTerbesar = makanan;
    string kategoriTerbanyak = "Makanan";

    if (transportasi > totalKategoriTerbesar) {
        totalKategoriTerbesar = transportasi;
        kategoriTerbanyak = "Transportasi";
    }

    if (hiburan > totalKategoriTerbesar) {
        totalKategoriTerbesar = hiburan;
        kategoriTerbanyak = "Hiburan";
    }

    if (lainnya > totalKategoriTerbesar) {
        totalKategoriTerbesar = lainnya;
        kategoriTerbanyak = "Lain-lain";
    }

    // Mengatur angka agar memiliki 2 angka di belakang koma
    cout << fixed << setprecision(2);

    // Menampilkan hasil
    cout << "\n\n";
    cout << "============================================\n";
    cout << "          HASIL PENGELUARAN MINGGUAN\n";
    cout << "============================================\n";

    cout << "\nTOTAL PENGELUARAN PER KATEGORI\n";
    cout << "--------------------------------------------\n";

    cout << left << setw(20) << "Makanan"
         << ": Rp " << makanan << endl;

    cout << left << setw(20) << "Transportasi"
         << ": Rp " << transportasi << endl;

    cout << left << setw(20) << "Hiburan"
         << ": Rp " << hiburan << endl;

    cout << left << setw(20) << "Lain-lain"
         << ": Rp " << lainnya << endl;

    cout << "--------------------------------------------\n";

    // Menampilkan total seluruh pengeluaran
    cout << left << setw(20) << "TOTAL SEMINGGU"
         << ": Rp " << totalSeminggu << endl;

    cout << "\nPENGELUARAN TERBESAR\n";
    cout << "--------------------------------------------\n";

    // Menampilkan pengeluaran harian terbesar
    cout << "Jumlah    : Rp " << pengeluaranTerbesar << endl;
    cout << "Kategori  : " << kategoriTerbesar << endl;

    cout << "\nKATEGORI DENGAN TOTAL TERBESAR\n";
    cout << "--------------------------------------------\n";

    // Menampilkan kategori yang totalnya paling besar
    cout << "Kategori  : " << kategoriTerbanyak << endl;
    cout << "Total     : Rp " << totalKategoriTerbesar << endl;

    cout << "\n============================================\n";
    cout << "       DATA PENGELUARAN SELESAI\n";
    cout << "============================================\n";

    return 0;
}
