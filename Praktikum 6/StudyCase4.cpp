#include <iostream>
#include <string>
using namespace std;


// Function untuk menghitung jumlah digit bilangan positif
int countDigits(int n) {
    int count = 0;


    while (n > 0) {
        count++;
        n /= 10;
    }


    return count;
}


int main() {
    // Contoh pertama
    int number1 = 123450;
    cout << "Bilangan: " << number1 << endl;
    cout << "Jumlah digit: " << countDigits(number1) << endl;


    int number2 = 012345;
    cout << "Bilangan: " << number2 << endl;
    cout << "Jumlah digit: " << countDigits(number2) << endl;


    return 0;
}

