#include <iostream>
using namespace std;


// Fungsi swap yang sudah diperbaiki logikanya
void swap(int *x, int *y) {
    int temp = *x; // Mengambil nilai yang ditunjuk x (nilai a)
    *x = *y;       // Mengubah nilai yang ditunjuk x menjadi nilai yang ditunjuk y
    *y = temp;     // Mengubah nilai yang ditunjuk y menjadi nilai temp
}


int main() {
    int a = 5, b = 10;
   
    // Memanggil fungsi swap dengan mengirimkan alamat memori (&)
    swap(&a, &b);
   
    // Menampilkan nilai setelah ditukar
    cout << "Setelah ditukar: a = " << a << ", b = " << b << endl;
   
    return 0;
}
/*Setelah ditukar: a = 10, b = 5*/
