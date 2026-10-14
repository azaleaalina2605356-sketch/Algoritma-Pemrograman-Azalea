#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double jt;
    double kbb;
    double hbb;
   
    cout << setw(15) << "Jarak Tempuh (km)           : " << endl;
    cin >> jt;
    cout << setw(15) << "Konsumsi Bahan Bakar (l/km) : " << endl;
    cin >> kbb;
    cout << setw(15) << "Harga Bahan Bakar (Rp)      : " << endl;
    cin >> hbb;

    double biaya = (jt/kbb)*hbb;

    cout << left << setw(25) << "Jarak Tempuh          :" << setw(40) << jt << endl;
    cout << left << setw(25) << "Konsumsi Bahan Bakar  :" << setw(40) << kbb << endl;
    cout << left << setw(25) << "Harga Bahan Bakar     :" << setw(40) << hbb << endl;
    cout << left << setw(25) << "Total Biaya           :" << setw(40) << fixed << setprecision(0) << biaya << endl;

    return 0;
}
