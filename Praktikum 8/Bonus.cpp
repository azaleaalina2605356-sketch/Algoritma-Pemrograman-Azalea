
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Proyek {
    string nama;
    long long anggaran;
    int pekerja;
};

// Fungsi input data proyek
void inputProyek(Proyek &p) {
    cout << "Nama proyek: ";
    getline(cin >> ws, p.nama);

    do {
        cout << "Anggaran proyek: Rp ";
        cin >> p.anggaran;

        if (p.anggaran < 0) {
            cout << "Anggaran tidak boleh negatif!\n";
        }
    } while (p.anggaran < 0);

    do {
        cout << "Jumlah pekerja: ";
        cin >> p.pekerja;

        if (p.pekerja < 0) {
            cout << "Jumlah pekerja tidak boleh negatif!\n";
        }
    } while (p.pekerja < 0);
}

// Fungsi menampilkan seluruh proyek
void tampilkanProyek(Proyek* proyek, int n) {
    if (n == 0) {
        cout << "Belum ada proyek.\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "Proyek " << i + 1 << ": "
             << proyek[i].nama
             << ", Anggaran: Rp " << proyek[i].anggaran
             << ", Pekerja: " << proyek[i].pekerja
             << endl;
    }
}

// Fungsi menambahkan proyek
void tambahProyek(Proyek* &proyek, int &n) {
    // Membuat array baru dengan ukuran lebih besar
    Proyek* temp = new Proyek[n + 1];

    // Menyalin data lama
    for (int i = 0; i < n; i++) {
        temp[i] = proyek[i];
    }

    cout << "\nMasukkan data proyek baru:\n";
    inputProyek(temp[n]);

    // Menghapus array lama
    delete[] proyek;

    // Mengarahkan pointer ke array baru
    proyek = temp;

    // Memperbarui jumlah proyek
    n++;

    cout << "Proyek berhasil ditambahkan!\n";
}

// Fungsi menghapus proyek
void hapusProyek(Proyek* &proyek, int &n, int indeks) {
    // Memeriksa validitas indeks
    if (indeks < 0 || indeks >= n) {
        cout << "Indeks proyek tidak valid!\n";
        return;
    }

    // Jika hanya tersisa satu proyek
    if (n == 1) {
        delete[] proyek;
        proyek = nullptr;
        n = 0;

        cout << "Proyek berhasil dihapus!\n";
        return;
    }

    // Membuat array baru dengan ukuran lebih kecil
    Proyek* temp = new Proyek[n - 1];

    int j = 0;

    // Menyalin data kecuali proyek yang dihapus
    for (int i = 0; i < n; i++) {
        if (i != indeks) {
            temp[j] = proyek[i];
            j++;
        }
    }

    // Menghapus array lama
    delete[] proyek;

    // Mengarahkan pointer ke array baru
    proyek = temp;

    // Mengurangi jumlah proyek
    n--;

    cout << "Proyek berhasil dihapus!\n";
}

// Fungsi analisis data proyek
void analisisProyek(Proyek* proyek, int n) {
    if (n == 0) {
        cout << "\nTidak ada proyek untuk dianalisis.\n";
        return;
    }

    long long totalAnggaran = 0;
    int totalPekerja = 0;

    int indeksTerbesar = 0;

    for (int i = 0; i < n; i++) {
        totalAnggaran += proyek[i].anggaran;
        totalPekerja += proyek[i].pekerja;

        if (proyek[i].anggaran >
            proyek[indeksTerbesar].anggaran) {
            indeksTerbesar = i;
        }
    }

    double rataRata =
        (double) totalPekerja / n;

    cout << "\n========== HASIL ANALISIS ==========\n";

    cout << "Total anggaran seluruh proyek: Rp "
         << totalAnggaran << endl;

    cout << fixed << setprecision(2);

    cout << "Rata-rata jumlah pekerja per proyek: "
         << rataRata << endl;

    cout << "Proyek dengan anggaran terbesar: "
         << proyek[indeksTerbesar].nama
         << " (Rp " << proyek[indeksTerbesar].anggaran
         << ")\n";
}

int main() {
    int n;

    cout << "Masukkan jumlah proyek: ";
    cin >> n;

    // Memeriksa jumlah proyek
    if (n < 0) {
        cout << "Jumlah proyek tidak boleh negatif!\n";
        return 0;
    }

    // Membuat array dinamis
    Proyek* proyek = nullptr;

    if (n > 0) {
        proyek = new Proyek[n];
    }

    // Input data proyek
    for (int i = 0; i < n; i++) {
        cout << "\nProyek " << i + 1 << endl;
        inputProyek(proyek[i]);
    }

    // Menampilkan data awal
    cout << "\n========== DATA PROYEK AWAL ==========\n";
    tampilkanProyek(proyek, n);

    // Menambahkan proyek
    cout << "\n========== TAMBAH PROYEK ==========\n";
    tambahProyek(proyek, n);

    // Menampilkan data setelah penambahan
    cout << "\n========== DATA SETELAH PENAMBAHAN ==========\n";
    tampilkanProyek(proyek, n);

    // Menghapus proyek
    cout << "\n========== HAPUS PROYEK ==========\n";

    if (n > 0) {
        int indeks;

        cout << "Masukkan indeks proyek yang dihapus (0 - "
             << n - 1 << "): ";
        cin >> indeks;

        hapusProyek(proyek, n, indeks);
    }

    // Menampilkan data setelah penghapusan
    cout << "\n========== DATA SETELAH PENGHAPUSAN ==========\n";
    tampilkanProyek(proyek, n);

    // Menghitung hasil analisis
    analisisProyek(proyek, n);

    // Membebaskan memori
    delete[] proyek;

    return 0;
}
