#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int pr = 5;
    int lr = 4;
    int tr = 3;
    int hcpl = 150000;
    
    double luas_dinding = 2 * (pr + lr) * tr;
    double liter_cat = luas_dinding / 10;
    double total_biaya = liter_cat * hcpl;

    cout << "Luas Dinding                     : " << luas_dinding << "m^2" <<endl;
    cout << "Jumlah Liter Cat Yang Dibutuhkan : " << liter_cat << "liter" <<endl;
    cout << "Total Biaya Cat                  : Rp " << total_biaya <<endl;
    return 0;
}
