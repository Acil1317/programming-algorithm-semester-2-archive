#include <iostream>
using namespace std;

int main () {
	string dataMhs[50][2];
	int opsi,  index = 0;
	bool menu = true;

	while (menu) {
		cout<<"======================================"<<endl;
		cout<<" APLIKASI DATA MAHASISWA " <<endl;
		cout<<" 1. TAMBAH DATA MAHASISWA " <<endl;
		cout<<" 2. TAMPILKAN MAHAISWA " <<endl;
		cout<<" 3. KELUAR PROGRAM " <<endl;
		cout<<"======================================"<<endl;
		cout<<" MASUKKAN MENU : ";
		cin>> opsi;
		cout<<"======================================"<<endl;
	
		switch (opsi) {
			case 1:
				cout<< " masukkan nama mahasiswa : ";
				cin>> dataMhs[index][0];
				cout<< " masukkan Nim : ";
				cin>> dataMhs[index][1];
				index++;
				break;
				
			case 2:
				if (index==0) {
					cout<<" Belum ada data mahasiswa "<<endl;
				} else {
					for (int i=0; i < index; i++) {
						cout<< " Nama : " << dataMhs[i][0] <<endl;
						cout<< " Nim : " << dataMhs[i][1] <<endl;
					}
				}
				break;
			
			case 3:
				menu = false;
				break;
				
			default:
				cout<< " menu tidak ada dalam pilihan"<<endl;
				break;
		}
	}
	cout<<" Terima Kasih..... " <<endl;

	return 0;	
}
