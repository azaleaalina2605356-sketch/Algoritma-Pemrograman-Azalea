#include <iostream>
using namespace std;


// Fungsi untuk menyalin string dari src ke dest menggunakan pointer
void copyString(char *src, char *dest) {
    while (*src) {
        *dest = *src; // PERBAIKAN: Menyalin nilai karakter (*src), bukan alamat pointernya (src)
        src++;        // Pindah ke karakter src berikutnya
        dest++;       // Pindah ke slot dest berikutnya
    }
    *dest = '\0';     // PERBAIKAN: Memberikan karakter penutup string pada akhir tujuan
}


int main() {
    char src[] = "Hello";
    char dest[10];
   
    // Memanggil fungsi salin string
    copyString(src, dest);
