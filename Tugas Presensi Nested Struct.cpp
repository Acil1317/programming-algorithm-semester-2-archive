#include <iostream>
#include <cstring>
using namespace std;
                         //Maftuh Faisal Jauhari 202431163
struct Hero {
	string nama;
	string role;
	struct type{
		string power;
		string lane;
	};
	type tp;
};
void cetak(Hero hero);

main(){
	Hero hero1,hero2,hero3;
	int pilihan;
	
	hero1.nama="Lylia";
	hero1.role="Mage";
	hero1.tp.power="Buff";
	hero1.tp.lane="Midlane";
	hero2 = {"X-Borg","Fighter",{"Damage Area","Exp Lane"}};
	hero3 = {"Tigreal","Tank",{"Crowd Control","Roam"}};
	
	cout<<"\nDaftar Hero-Hero Mobile Legends\n";
	cout<<"====================================================="<<endl;
	cout<<"1. Hero ke-1"<<endl<<"2. Hero ke-2"<<endl<<"3. Hero ke-3"<<endl<<"4. Semua Hero"<<endl;
	cout<<"====================================================="<<endl;
	cout<<"Pilih Hero yang ingin ditampilkan(1-4): ";
	cin>>pilihan;
	cout<<endl;
	
	switch(pilihan){
	case 1: cetak(hero1); break;
	case 2: cetak(hero2); break;
	case 3: cetak(hero3); break;
	case 4: cetak(hero1); cout<<endl; cetak(hero2);cout<<endl; cetak(hero3); break;
	default: cout<<"yah nampaknya Hero tidak terdaftar "<<endl;	
	}
}

void cetak(Hero hero){
	cout<<"Nama Hero: "<<hero.nama<<endl;
	cout<<"Role: "<<hero.role<<endl;
	cout<<"Type: "<<hero.tp.power<<", "<<hero.tp.lane<<endl;
}
