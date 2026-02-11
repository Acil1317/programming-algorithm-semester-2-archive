#include <iostream>
using namespace std;

int main () {
	
	int arr[7] = {1, 2, 3, 4, 5, 6, 7};
	string day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

	int num[5]; // declare an array with a capacity of 5 elements
	
	// Show array
	for(int i = 0; i < 7; i++){
		cout << arr[i] << ". " << day[i] << endl;
	}
	
	// array values
	num[0] = 5;
	num[1] = 4;
	num[2] = 3;
	num[3] = 2;
	num[4] = 1;
	
	// Show array
	for(int i = 0; i < 5; i++){
		cout << num[i] << endl;
	}
	
	return 0;
}
