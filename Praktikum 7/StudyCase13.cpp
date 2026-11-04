#include <iostream>
using namespace std;


void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        // Menggunakan pointer arithmetic untuk mengakses nilai elemen
        cout << *(arr + i) << " ";
    }
    cout << endl;
}


int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
   
    cout << "Elemen array: ";
    printArray(numbers, 5);
   
    return 0;
}
/*Elemen array: 10 20 30 40 50 */
