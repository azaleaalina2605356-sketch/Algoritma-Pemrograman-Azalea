#include <iostream>

using namespace std;

int main(){

    int num;
    num = 12;

    cout << "\nFaktor-faktor dari " << num << " adalah:\n ";
    for (int i = 1; i <= num; ++i)
    {

    if (num % i == 0) 
    {
    cout << i << "\n ";
    }

    }

}

