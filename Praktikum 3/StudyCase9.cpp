#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string satuanAwal, konversi;

    cout << "Masukkan satuan awal: ";
    cin >> satuanAwal;

    cout << "Konversi ke (centimeter/milimeter/kilometer): ";
    cin >> konversi;

    cout << endl;

    if (satuanAwal == "meter" && konversi == "centimeter") {

        cout << left
             << setw(10) << "Meter"
             << setw(15) << "Centimeter" << endl;

        cout << "------------------------" << endl;

        for (int meter = 1; meter <= 10; meter++) {
            cout << left
                 << setw(10) << meter
                 << setw(15) << meter * 100
                 << endl;
        }
    }

    else if (satuanAwal == "meter" && konversi == "milimeter") {

        cout << left
             << setw(10) << "Meter"
             << setw(15) << "Milimeter" << endl;

        cout << "------------------------" << endl;

        for (int meter = 1; meter <= 10; meter++) {
            cout << left
                 << setw(10) << meter
                 << setw(15) << meter * 1000
                 << endl;
        }
    }

    else if (satuanAwal == "meter" && konversi == "kilometer") {

        cout << left
             << setw(10) << "Meter"
             << setw(15) << "Kilometer" << endl;

        cout << "------------------------" << endl;

        for (int meter = 1; meter <= 10; meter++) {
            cout << left
                 << setw(10) << meter
                 << setw(15) << fixed << setprecision(3)
                 << (double)meter / 1000
                 << endl;
        }
    }

    else {
        cout << "Pilihan satuan atau konversi tidak valid!" << endl;
    }

    return 0;
}
