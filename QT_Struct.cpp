#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
	string nama;
	int umur;
	string nim;
};

int main() {
	Mahasiswa mhs;
	
	cout << "Masukkan Nama Anda: "; getline(cin, mhs.nama);
	cout << "Masukkan Umur Anda: "; cin >> mhs.umur;
	cout << "Masukkan NIM Anda : "; cin >> mhs.nim;
	
	cout << "\nData Mahasiswa\n";
	cout << "Nama : " << mhs.nama << endl;
	cout << "Umur : " << mhs.umur << endl;
	cout << "NIM  : " << mhs.nim << endl;

	return 0;
}
