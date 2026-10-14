#include <iostream>
#include <iomanip>

using namespace std;

int main(){

   double suhu1;
   double suhu2;
   double suhu3;
   double suhu4;
   double suhu5;
  

    cout << setw(15) << "Suhu hari ke 1  : " << endl;
    cin >> suhu1;
    cout << setw(15) << "Suhu hari ke 2  : " << endl;
    cin >> suhu2;
    cout << setw(15) << "Suhu hari ke 3  : " << endl;
    cin >> suhu3;
    cout << setw(15) << "Suhu hari ke 4  : " << endl;
    cin >> suhu4;
    cout << setw(15) << "Suhu hari ke 5  : " << endl;
    cin >> suhu5;

    double ratarata = (suhu1 + suhu2 + suhu3 + suhu4 + suhu5) / 5;
    
    cout << left << setw(15) << "Suhu hari 1    : " << setw(25) << suhu1 << endl;
    cout << left << setw(15) << "Suhu hari 2    : " << setw(25) << suhu2 << endl;
    cout << left << setw(15) << "Suhu hari 3    : " << setw(25) << suhu3 << endl;
    cout << left << setw(15) << "Suhu hari 4    : " << setw(25) << suhu4 << endl;
    cout << left << setw(15) << "Suhu hari 5    : " << setw(25) << suhu5 << endl;
    cout << left << setw(15) << "Suhu Rata-Rata  : " << setw(25) << ratarata << endl;

    return 0;



}
