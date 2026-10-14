#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double panjang, lebar, tinggi, harga_per_liter;
    double luas_dinding, jumlah_cat, total_biaya;

    cout << "Perhitungan Kebutuhan Cat Ruangan" << endl;
    cout << "Masukkan panjang ruangan (meter) : ";
    cin >> panjang;
    cout << "Masukkan lebar ruangan (meter) : ";
    cin >> lebar;
    cout << "Masukkan tinggi ruangan (m)  : ";
    cin >> tinggi;
    cout << "Masukkan harga cat per liter : Rp ";
    cin >> harga_per_liter;

    luas_dinding = 2 * tinggi * (panjang + lebar); 

    jumlah_cat = luas_dinding / 10.0; 
    
    total_biaya = jumlah_cat * harga_per_liter;

    cout << fixed << setprecision(2);

    cout << "\nHasil Perhitungan" << endl;
    cout << "Total luas dinding         : " << luas_dinding << " m^2" << endl;
    cout << "Jumlah cat yang dibutuhkan : " << jumlah_cat << " liter" << endl;
    cout << "Total biaya                : Rp " << total_biaya << endl;

    cout << "Kategori kebutuhan cat     : ";
    if (jumlah_cat > 10.0) {
        cout << "Banyak Cat Dibutuhkan" << endl;
    } else if (jumlah_cat >= 5.0 && jumlah_cat <= 10.0) {
        cout << "Sedang" << endl;
    } else {
        cout << "Sedikit" << endl;
    }

    return 0;
}
