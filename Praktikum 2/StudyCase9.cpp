#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()  {
    cout << left << setw(10) << "Meter" << setw(15) << "Sentimeter" << setw(20) << "Milimeter" << setw(25) << "Kilometer" <<endl;
    cout << left << setw(10) << "1" << setw(15) << "100" << setw(20) << "1000" << setw(25) << "0.001" <<endl;
    cout << left << setw(10) << "2" << setw(15) << "200" << setw(20) << "2000" << setw(25) << "0.002" <<endl;
    return 0;
}
