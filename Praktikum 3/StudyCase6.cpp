#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double suhu[5], jumlah = 0, rata_rata;

    for (int i = 0; i < 5; i++) {
        cout << "Suhu hari ke-" << i + 1 << " : ";
        cin >> suhu[i];
        jumlah += suhu[i];
    }

    rata_rata = jumlah / 5;

    cout << fixed << setprecision(1);
    cout << "\nSuhu selama 5 hari:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Hari ke-" << i + 1 << " : " << suhu[i] << " C" << endl;
    }

    cout << "Rata-rata suhu : " << rata_rata << " C" << endl;

    if (rata_rata > 30.0) {
        cout << "Cuaca Panas" << endl;
    } else if (rata_rata >= 20.0 && rata_rata <= 30.0) {
        cout << "Cuaca Normal" << endl;
    } else {
        cout << "Cuaca Dingin" << endl;
    }

    return 0;
}
