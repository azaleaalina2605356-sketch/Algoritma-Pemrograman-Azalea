#include <iostream>
using namespace std;

// Fungsi findMax mengembalikan pointer (int*) yang menunjuk ke elemen terbesar dalam array
int* findMax(int arr[], int size) {
    // pMax adalah pointer yang menyimpan alamat dari elemen pertama array
    int* pMax = &arr[0];
   
    for (int i = 1; i < size; i++) {
        // Membandingkan nilai yang ditunjuk pMax dengan elemen array ke-i
        if (arr[i] > *pMax) {
            pMax = &arr[i]; // Menyimpan alamat elemen yang lebih besar
        }
    }
   
    return pMax; // Aman dikembalikan karena array di main() masih ada di memori
}


int main() {
    int arr[] = {3, 5, 2, 9, 6};
   
    // Menerima alamat elemen maksimum dari fungsi findMax
    int *max = findMax(arr, 5);
