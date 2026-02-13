#include <iostream>
using namespace std;

int  main(){
	int nama;
	string anggota[6] = {"Faisal", "Fajar", "Ello", "Daus", "Reja" };
	
	cout << "Masukan Nama (1-6): ";cin>>nama;
	
	switch (nama){
	case 1:
		cout<<anggota[0]<<endl;
		break;
	case 2:
		cout<<anggota[1]<<endl;
		break;
	case 3:
		cout<<anggota[2]<<endl;
		break;
	case 4:
		cout<<anggota[3]<<" Ganteng"<<endl;
		break;
	case 5:
		cout<<anggota[4]<<endl;
		break;						
	}
return 0

;

}

