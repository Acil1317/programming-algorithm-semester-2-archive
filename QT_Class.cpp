#include <iostream>
#include <string>

using namespace std;

class Ponsel {
	private:
		string merek;
		string model;
		float harga;
	
	public:
		void setMerek(string m) {
			merek = m;
		}
		
		void setModel(string m) {
			model = m;
		}
		
		void setHarga(float h) {
			if (h > 0) {
				harga = h;
			} else {
				cout << "Harga harus lebih dari 0.\n";
			}
		}	
	
	string getMerek() {
		return merek;
	}
	
	string getModel() {
		return model;
	}
	
	int getHarga() {
		return harga;
	}
	
	void tampilkanInfo() {
		cout << "===== Informasi Ponsel =====\n";
		cout << "Merek : " << merek << endl;
		cout << "Model : " << model << endl;
		cout << "Harga : " << harga << endl;
	}
};

int main () {
	Ponsel p1;
		p1.setMerek("Apple");
		p1.setModel("Iphone 15");
		p1.setHarga(300000);
		
	Ponsel p2;
		p2.setMerek("Samsung");
		p2.setModel("Galaxy S25");
		p2.setHarga(30000);
		
		p1.tampilkanInfo();
		cout << endl;
		p2.tampilkanInfo();
}
