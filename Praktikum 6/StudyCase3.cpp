#include <iostream>
using namespace std;

int main() {
    // Membuat array yang berisi 5 angka
    int arr[5] = {1, 2, 3, 4, 5};

    // Menampilkan angka genap
    cout << "Angka genap: ";
    for (int i = 0; i < 5; i++) {
        // Jika angka habis dibagi 2, berarti genap
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    // Menampilkan angka ganjil
    cout << endl << "Angka ganjil: ";
    for (int i = 0; i < 5; i++) {
        // Jika angka tidak habis dibagi 2, berarti ganjil
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}

