#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double Phi = 3.14;
    double panjang,lebar,tinggi,volume,luas,jari2,sisi,Gpelukis;
    int angka;

    cout << "Pilih bangun ruang:" << endl;
    cout << "1. Balok" << endl;
    cout << "2. Tabung" << endl;
    cout << "3. Kubus" << endl;
    cout << "4. Kerucut" << endl;
    cout << "Masukkan pilihan bangun ruang anda (1-4) : ";
    cin >> angka;
    cout << "====================================================================" << endl;

    if (angka == 1)
    {
        cout << "masukkan panjang : ";
        cin >> panjang;
        cout << "masukkan lebar   : ";
        cin >> lebar;
        cout << "masukkan tinggi  : ";
        cin >> tinggi;

        volume = panjang * lebar * tinggi;
        luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);

        cout << "====================================================================" << endl;
        cout << left;
        cout << setw(15) << "panjang" << setw(15) << "lebar" << setw(15) << "tinggi"
             << setw(15) << "volume" << setw(20) << "Luas Permukaan" << endl;
        cout << setw(15) << panjang
             << setw(15) << lebar
             << setw(15) << tinggi
             << setw(15) << volume
             << setw(20) << luas << endl;
    }
    else if (angka == 2)
    {
        cout << "masukkan jari-jari : ";
        cin >> jari2;
        cout << "masukkan tinggi    : ";
        cin >> tinggi;

        volume = Phi * jari2 * jari2 * tinggi;
        luas = 2 * Phi * jari2 * (jari2 + tinggi);

        cout << "====================================================================" << endl;
        cout << left;
        cout << setw(15) << "jari-jari" << setw(15) << "tinggi"
             << setw(15) << "volume" << setw(20) << "Luas Permukaan" << endl;
        cout << setw(15) << jari2
             << setw(15) << tinggi
             << setw(15) << volume
             << setw(20) << luas << endl;
    }
    else if (angka == 3)
    {
        cout << "masukkan sisi : ";
        cin >> sisi;

        volume = sisi * sisi * sisi;
        luas = 6 * sisi * sisi;

        cout << "====================================================================" << endl;
        cout << left;
        cout << setw(15) << "sisi" << setw(15) << "volume" << setw(20) << "Luas Permukaan" << endl;
        cout << setw(15) << sisi
             << setw(15) << volume
             << setw(20) << luas << endl;
    }
    else if (angka == 4)
    {
        cout << "masukkan jari-jari : ";
        cin >> jari2;
        cout << "masukkan tinggi    : ";
        cin >> tinggi;

        Gpelukis = sqrt(jari2 * jari2 + tinggi * tinggi);
        volume = (1.0 / 3.0) * Phi * jari2 * jari2 * tinggi;
        luas = Phi * jari2 * (jari2 + Gpelukis);

        cout << "====================================================================" << endl;
        cout << left;
        cout << setw(15) << "jari-jari" << setw(15) << "tinggi"
             << setw(15) << "volume" << setw(20) << "Luas Permukaan" << endl;
        cout << setw(15) << jari2
             << setw(15) << tinggi
             << setw(15) << volume
             << setw(20) << luas << endl;
    }
    else
    {
        cout << "Pilihan tidak ada, Silakan pilih 1-4." << endl;
    }
    return 0;
}
