#include <iostream>
using namespace std;

int main () {
	int meter;
	double totalHarga;
	
	// input jumlah meter kubik air pam
	cout<<"Masukkan Jumlah meter kubik air pam : ";
	cin>> meter;
	
	// Hitung total Harga berdasarkan ketentuan
	if(meter > 0) {
		if (meter < 50 ) {
			totalHarga = meter * 1000;
		} else if (meter < 100) {
				totalHarga = (50 * 1000) + ((meter - 50) * 1500);
		} else if (meter < 150) {
				totalHarga = (50 * 1000) + (50 * 1500) + ((meter - 100) * 2000);
		} else {
			totalHarga = (50 * 1000) + (50 * 1500) + (50 * 1500) + ((meter - 150) * 3000);
		}
		
		// Cetak total harga
		cout<<"Total Harga Yang harus dibayar : Rp " << totalHarga <<endl;
	} else {
		cout<<"Jumlah meter kubik harus lebih besar dari 0.";
	}
	
	return 0;
}
