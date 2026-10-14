#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int rupiah;
    float kurs;
    int angka;
    string Matauang, simbol;

    cout << "masukkan jumlah rupiah   : ";
    cin >> rupiah;

    cout << "==========================" << endl;
    cout << "Pilih mata uang konversi:" << endl;
    cout << "1. Dollar  (USD)" << endl;
    cout << "2. Euro    (EUR)" << endl;
    cout << "3. Yen     (JPY)" << endl;
    cout << "4. Rupee   (INR)" << endl;
    cout << "5. Rial    (SAR)" << endl;
    cout << "6. Won     (KRW)" << endl;
    cout << "7. Ringgit (MYR)" << endl;
    cout << "8. Baht    (THB)" << endl;
    cout << "==========================" << endl;
    cout << "Masukkan mata uang yang anda inginkan (1-8)   : ";
    cin >> angka;

    cout << "masukkan kurs            : ";
    cin >> kurs;

    switch (angka)
    {
        case 1: Matauang = "Dollar";  simbol = "$";   break;
        case 2: Matauang = "Euro";    simbol = "\u20AC"; break;
        case 3: Matauang = "Yen";     simbol = "\u00A5"; break;
        case 4: Matauang = "Rupee";   simbol = "Rs";  break;
        case 5: Matauang = "Rial";    simbol = "SR";  break;
        case 6: Matauang = "Won";     simbol = "\u20A9";   break;
        case 7: Matauang = "Ringgit"; simbol = "RM";  break;
        case 8: Matauang = "Baht";    simbol = "\u0E3F";   break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return 1;
    }

    float hasil = rupiah / kurs;

    cout << "==========================" << endl << left;
    cout << setw(15) << "Jumlah Rupiah" << ": Rp " << rupiah << endl;
    cout << setw(15) << ("Jumlah " + Matauang) << ": " << simbol << " "
         << fixed << setprecision(2) << hasil << endl;

    return 0;
}
