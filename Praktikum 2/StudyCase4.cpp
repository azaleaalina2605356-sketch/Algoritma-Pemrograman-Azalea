#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double jumlahRupiah, kurs, jumlahDollar;

    cout << "Masukkan jumlah uang dalam Rupiah: ";
    cin >> jumlahRupiah;
    cout << "Masukkan kurs konversi ke Dollar: ";
    cin >> kurs;

    jumlahDollar = jumlahRupiah / kurs;

    cout << "Jumlah dalam Rupiah: Rp " << fixed << setprecision(0) << jumlahRupiah << endl;
    cout << "Jumlah dalam Dollar: $ " << fixed << setprecision(2) << jumlahDollar << endl;
    return 0;
}
