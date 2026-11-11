#include <iostream>


using namespace std;


void tampilkanMatriks(int** m, int b, int k, int i = 0, int j = 0) {
    if (i >= b) return;
    if (j >= k) { cout << endl; return tampilkanMatriks(m, b, k, i + 1, 0); }
    cout << m[i][j] << " ";
    tampilkanMatriks(m, b, k, i, j + 1);
}


int main() {
    int b, k;
    cout << "Masukkan jumlah baris dan kolom: ";
    cin >> b >> k;


    int** asli = new int*[b];
    int** trans = new int*[k];
    for (int i = 0; i < b; i++) asli[i] = new int[k];
    for (int i = 0; i < k; i++) trans[i] = new int[b];


    // Input & Proses Transpose langsung
    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < k; j++) {
            cin >> asli[i][j];
            trans[j][i] = asli[i][j]; // ditranspose saat input
        }
    }


    // Output
    cout << "\nMatriks asli:\n";
    tampilkanMatriks(asli, b, k);


    cout << "\nMatriks transpose:\n";
    tampilkanMatriks(trans, k, b);


    for (int i = 0; i < b; i++) delete[] asli[i];
    for (int i = 0; i < k; i++) delete[] trans[i];
    delete[] asli;
    delete[] trans;


    return 0;
}
