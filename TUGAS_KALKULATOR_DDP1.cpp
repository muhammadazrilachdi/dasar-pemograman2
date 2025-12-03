#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

float bagi(float a, float b) {
    if (b == 0) {
        cout << "Tidak bisa membagi dengan 0!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int pilih;
    float a, b;

    cout << "=== Kalkulator Sederhana ===\n";
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
    cout << "Pilih operasi (1-4): ";
    cin >> pilih;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    switch (pilih) {
        case 1:
            cout << "Hasil: " << tambah(a, b);
            break;
        case 2:
            cout << "Hasil: " << kurang(a, b);
            break;
        case 3:
            cout << "Hasil: " << kali(a, b);
            break;
        case 4:
            cout << "Hasil: " << bagi(a, b);
            break;
        default:
            cout << "Error !!!";
    }

    return 0;
}
