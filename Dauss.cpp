#include <iostream>
#include <cstring>
using namespace std;

struct mhs{
	string nama;
	int NIM;
	struct Asal{
		string provinsi;
		string kota;
	};
	Asal asal;
};
void cetak(mhs mhs);

main(){
	mhs mhs1,mhs2,mhs3;
	int pilihan;
	
	mhs1.nama="morius";
	mhs1.NIM=202431186;
	mhs1.asal.provinsi="Jawa Timur";
	mhs1.asal.kota="Kediri";
	mhs2 = {"paisal",202431168,{"Jawa barat","Bandung"}};
	mhs3 = {"Ujang",202431179,{"Kalimantan Timur","Samarinda"}};
	
	cout<<"====================================================="<<endl;
	cout<<"1 untuk mahasiswa pertama"<<endl<<"2 untuk mahasiswa kedua"<<endl<<"3 untuk mahasiswa ketiga"<<endl<<"4 untuk semua mahasiswa"<<endl;
	cout<<"====================================================="<<endl;
	cout<<"Pilih mahasiswa yang ingin ditampilkan(1-4): ";
	cin>>pilihan;
	cout<<endl;
	
	switch(pilihan){
	case 1: cetak(mhs1); break;
	case 2: cetak(mhs2); break;
	case 3: cetak(mhs3); break;
	case 4: cetak(mhs1); cout<<endl; cetak(mhs2);cout<<endl; cetak(mhs3); break;
	default: cout<<"Pilihan Tidak Tersedia"<<" "<<"maap yak"<<endl;	
	}
}

void cetak(mhs mhs){
	cout<<"Nama: "<<mhs.nama<<endl;
	cout<<"Nim: "<<mhs.NIM<<endl;
	cout<<"Asal: "<<mhs.asal.provinsi<<", "<<mhs.asal.kota<<endl;
}
