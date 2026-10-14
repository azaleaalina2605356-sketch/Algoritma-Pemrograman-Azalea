#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int berat = 50;
    double tinggi = 1.78;
    double bmi;

    bmi = berat / (tinggi * tinggi);

    cout << fixed << setprecision(2);
    cout << "Berat badan: " << berat << " kg" << endl;
    cout << "Tinggi badan: " << tinggi << " meter" << endl;
    cout << "BMI: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kategori: Berat badan kurang (Underweight)" << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Kategori: Berat badan normal" << endl;
        cout << "Berat badan sesuai dengan rentang ideal." << endl;
    }
    else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Kategori: Berat badan berlebih (Overweight)" << endl;
    }
    else {
        cout << "Kategori: Obesitas" << endl;
    }

    return 0;
}
