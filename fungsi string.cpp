#include <iostream>
#include <cstring>
using namespace std;

int main () {
	
	char nama[250];

	cout << "\Input Sebuah Nama---------------";
	cout << "\nNama Yang diinput : ";
	cin.getline(nama, 250);

	cout << "Panjang Karakter : " << strlen(nama)<<endl;
	cout << "Karakter dibalik : " << strrev(nama)<<endl;
	strrev(nama);
	cout << "Karakter diubah ke huruf besar : " << strupr(nama)<<endl;
	cout << "Karakter diubah ke huruf kecil : " << strlwr(nama)<<endl;
	cout << "\n========================="<<endl;
	
	char a [150];
	strcpy(a, nama);
	strupr(a);
	
	cout<<"\n";
	for (int i = 1; i <= strlen(a); i++) {
		for (int j = 0; j < i; j++) {
			cout << a [j];
		}
		cout << endl;
	}

	char b [150];
	strcpy(b, nama);
	strupr(b);
	
	for (int i = strlen(b); i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			cout << b [j];
		}
		cout << endl;
	}
	

	
return 0;	
}
