#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main () {
	string kata;
	
	cout << "Masukkan Sebuah Kata: "; getline(cin, kata);
	
	cout << "Panjang Kata: " << kata.length() << endl;
	
	string kapital = kata;
	
	transform(kapital.begin(), kapital.end(), kapital.begin(), :: toupper);
	cout << "Kata Kapital: " << kapital << endl;
	
	string kecil = kata;
	transform(kecil.begin(), kecil.end(), kecil.begin(), :: tolower);
	cout << "Kata Kecil: " << kecil <<endl;

	string balik = kata;
	reverse(balik.begin(), balik.end());
	cout << "Balik Kata: " << balik << endl;

	return 0;
}
