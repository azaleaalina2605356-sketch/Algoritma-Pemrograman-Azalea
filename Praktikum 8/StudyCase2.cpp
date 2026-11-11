#include <iostream>


using namespace std;


int** alokasiMatriks(int baris, int kolom) {
    int** matriks = new int*[baris];
    for (int i = 0; i < baris; i++) {
        matriks[i] = new int[kolom];
    }
    return matriks;
}


void dealokasiMatriks(int** matriks, int baris) {
    for (int i = 0; i < baris; i++) {
        delete[] matriks[i];
    }
    delete[] matriks;
}


int main() {
    int barisA, kolomA, barisB, kolomB;


    cout << "Masukkan jumlah baris Matriks A: ";
    cin >> barisA;
    cout << "Masukkan jumlah kolom Matriks A: ";
    cin >> kolomA;
   
    cout << "Masukkan jumlah baris Matriks B: ";
    cin >> barisB;
    cout << "Masukkan jumlah kolom Matriks B: ";
    cin >> kolomB;


    if (kolomA != barisB) {
        cout << "\nError: Perkalian matriks tidak dapat dilakukan!" << endl;
        cout << "Jumlah kolom matriks pertama tidak sama dengan jumlah baris matriks kedua." << endl;
        return 0;
    }
    int** matriksA = alokasiMatriks(barisA, kolomA);
    int** matriksB = alokasiMatriks(barisB, kolomB);
    int** matriksC = alokasiMatriks(barisA, kolomB);




    cout << "\nMasukkan elemen Matriks A (" << barisA << "x" << kolomA << "):" << endl;
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            cin >> matriksA[i][j];
        }
    }  
    cout << "\nMendapatkan elemen Matriks B (" << barisB << "x" << kolomB << "):" << endl;
    for (int i = 0; i < barisB; i++) {
        for (int j = 0; j < kolomB; j++) {
            cin >> matriksB[i][j];
        }
    }


    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            matriksC[i][j] = 0;
            for (int k = 0; k < kolomA; k++) {
               
                matriksC[i][j] += *(*(matriksA + i) + k) * *(*(matriksB + k) + j);
               
            }
        }
    }


    cout << "\nHasil perkalian Matriks A dan B:" << endl;
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            cout << matriksC[i][j] << " ";
        }
        cout << endl;
    }
    dealokasiMatriks(matriksA, barisA);
    dealokasiMatriks(matriksB, barisB);
    dealokasiMatriks(matriksC, barisA);


    return 0;
}
