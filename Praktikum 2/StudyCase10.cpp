#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    int a1 = 10;
    int a2 = 12;
    int a3 = 9;
    int a4 = 11;
    int a5 = 13;
    
    double average_a = (a1 + a2 + a3 + a4 + a5) / 5;
    double standar_deviasi = sqrt(
    (pow(a1 - average_a, 2) +
    pow(a2 - average_a, 2) +
    pow(a3 - average_a, 2) +
    pow(a4 - average_a, 2) +
    pow(a5 - average_a, 2)) / 5
    );
    cout << "Rata Rata : " << fixed << setprecision(1) << average_a << endl;
        cout << "Standar Deviasi : " << fixed << setprecision(1) << standar_deviasi << endl;
    return 0;

}
