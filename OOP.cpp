#include <iostream>
using namespace std;

class Car{
private:
	string brand, year, type, colour;
	int price;
public:
	Car() {
		brand = "";
		year = "";
		type  = "";
		colour = "";
		price = 0;
}
	Car(string newBrand, string newYear, string newType, string newColour, int newprice) {
		brand = newBrand;
		year = newYear;
		type  = newType;
		colour = newColour;
		price = newprice;
	}
	void setPrice(int price) {
		this ->price = price;
	}
	void setYear(string year) {
		this ->year = year;
	}
	int getPrice() {
		return this->price;
	}
	string getYear() {
		return this->year;
	}
	
	void printInfo() {
		cout << "brand\t: " << brand << endl;
		cout << "year\t: " << year << endl;
		cout << "type\t: " << type << endl;
		cout << "colour\t: " << colour << endl;
		cout << "price\t: " << price << endl;
		
	}
};

int main () {
	Car car1 ("Toyota", "2018", "Innova", "silver", '50000000');
	car1.setPrice(300000000);
	car1.setYear("2006");
	car1.printInfo();
	cout << car1.getPrice() << endl;
	cout << car1.getYear() << endl;
	return 0;
}
