#include <iostream>
using namespace std;


// Function untuk menghitung jumlah huruf vokal
int countVowels(char arr[], int size) {
    int count = 0;


    // Memeriksa setiap karakter dalam array
    for (int i = 0; i < size; i++) {
        // Memeriksa apakah karakter merupakan huruf vokal
        if (arr[i] == 'a' || arr[i] == 'e' ||
            arr[i] == 'i' || arr[i] == 'o' ||
            arr[i] == 'u') {
            count++;
        }
    }


    // Mengembalikan jumlah huruf vokal
    return count;
}


int main() {
    // Membuat array berisi 5 karakter
    char letters[5] = {'a', 'b', 'c', 'e', 'i'};


    // Menampilkan jumlah huruf vokal
    cout << "Jumlah vokal: "
         << countVowels(letters, 5) << endl;


    return 0;
}

