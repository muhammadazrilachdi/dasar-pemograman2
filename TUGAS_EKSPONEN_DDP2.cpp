#include <iostream>
using namespace std;

int pangkat(int a, int b) {
    if (b == 0) {
        return 1; 
    }
    return a * pangkat(a, b - 1);
}

int main() {
    int a, b;
    cout << "Masukkan angka dasar (a): ";
    cin >> a;
    cout << "Masukkan eksponen (b): ";
    cin >> b;

    cout << "Hasil " << a << "^" << b << " = " << pangkat(a, b);
    return 0;
}
