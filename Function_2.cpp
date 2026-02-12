#include <iostream>
using namespace std;

// Fungsi untuk memeriksa apakah angka genap atau ganjil
void cekBilangan(int angka) {
    if (angka % 2 == 0) {
        cout << angka << " adalah bilangan genap." << endl;
    } else {
        cout << angka << " adalah bilangan ganjil." << endl;
    }
}

int main() {
    int angka;

    // Meminta input dari pengguna
    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    // Memanggil fungsi untuk memeriksa bilangan
    cekBilangan(angka);

    return 0;
}
