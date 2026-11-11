#include <iostream>


using namespace std;


double hitungTotalRekursif(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + hitungTotalRekursif(arr, n - 1);
}
double hitungRataRata(int arr[], int n) {
    if (n <= 0) return 0;
    return hitungTotalRekursif(arr, n) / n;
}


int main() {
    int jumlahMahasiswa;


    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;


    if (jumlahMahasiswa <= 0) {
        cout << "\nJumlah mahasiswa tidak boleh 0 atau negatif. Program dihentikan." << endl;
        return 0;
    }


    int* nilaiMahasiswa = new int[jumlahMahasiswa];


    cout << "Masukkan nilai mahasiswa:\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa " << i + 1 << ": ";
        cin >> nilaiMahasiswa[i];
    }


    int nilaiTerbesar = nilaiMahasiswa[0];
    int nilaiTerkecil = nilaiMahasiswa[0];


   
    for (int i = 1; i < jumlahMahasiswa; i++) {
        if (nilaiMahasiswa[i] > nilaiTerbesar) {
            nilaiTerbesar = nilaiMahasiswa[i];
        }
        if (nilaiMahasiswa[i] < nilaiTerkecil) {
            nilaiTerkecil = nilaiMahasiswa[i];
        }
    }


    double rataRata = hitungRataRata(nilaiMahasiswa, jumlahMahasiswa);


    cout << "\nOutput:\n";
    cout << "Nilai terbesar: " << nilaiTerbesar << endl;
    cout << "Nilai terkecil: " << nilaiTerkecil << endl;
    cout << "Rata-rata nilai: " << rataRata << endl;


    delete[] nilaiMahasiswa;


    return 0;
}

