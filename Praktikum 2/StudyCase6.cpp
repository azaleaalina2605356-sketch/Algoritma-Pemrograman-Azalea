#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;

int main() {
    
     double weight, height, bmi;
     bool ideal;

     cout << "Masukkan berat badan (kg): ";
     cin >> weight;
     cout << "Masukkan tinggi badan (cm): ";
     cin >> height;

     bmi = weight / ((height / 100) * (height / 100));
     ideal = (bmi >= 18.5 && bmi <= 24.9);

     cout << "BMI : " << fixed << setprecision(2) << bmi << endl;
     cout << "Ideal : " << (ideal ? "Ya" : "Tidak") << endl;

    return 0;
}
