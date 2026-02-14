#include <iostream>
#include <cstring>
using namespace std;
						//202431163 Maftuh Faisal Jauhari
int main () {
	
	char x [120];
	
	cout << "lab dasar";
	cout << "\nInput Karakter -> =========================";
	cout << "\nKarakter Yang diinput : ";
	cin.getline(x, 120);
	cout << "Panjang Karakter : " << strlen(x)<<endl;
	cout << "Karakter dibalik : " << strrev(x)<<endl;
	strrev(x);
	cout << "Karakter diubah ke huruf besar : " << strupr(x)<<endl;
	cout << "Karakter diubah ke huruf kecil : " << strlwr(x)<<endl;
	cout << "\n=========================";
	
	char a [150];
	strcpy(a, x);
	strupr(a);
	
	cout<<"\n";
	for (int i = 1; i <= strlen(a); i++) {
		for (int j = 0; j < i; j++) {
			cout << a [j];
		}
		cout << endl;
	}

	char b [150];
	strcpy(b, x);
	strupr(b);
	
	for (int i = strlen(b); i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			cout << b [j];
		}
		cout << endl;
	}
	
}


