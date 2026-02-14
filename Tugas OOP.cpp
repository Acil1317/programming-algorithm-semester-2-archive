#include <iostream>
using namespace std;

class Event {
	private:
		string eventDesc;
		int d;
		int m;
		int y;
		
	public:
		Event() : d(0), m(0), y(0), eventDesc("None") {} // constructor kosong
		
		Event(int date, int month, int year, string eventDesc) : d(date), m(month), y(year), eventDesc(eventDesc) {} // constructor lengkap

		void setEventDesc(string eventDesc){ 
			this->eventDesc = eventDesc;
		}
		
		string getEventDesc() {
			return this->eventDesc;
		}
		
		void getEventDetails() {
			cout << d << "/" << m << "/" << y << " - " << eventDesc << "\n";
		}	
};

int main() { // Perbaiki definisi main
	
	Event timeline[5] = {
			{5, 5, 2025, "Mengaji"},
			{6, 6, 2025, "Menyapu"},
			{7, 7, 2025, "Mengepel"},
			{8, 8, 2025, "Menyuci"},
			{9, 9, 2025, "Mengelap"},
	};
	for (int i = 0; i < 5; i++) {
		timeline[i].getEventDetails();
	}
	
	return 0;
}

