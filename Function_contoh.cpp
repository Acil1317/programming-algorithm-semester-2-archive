#include <iostream>
using namespace std;

	int findmax (int arr[], int size) {
		int max = arr[0];
			for (int i = 1; i < size; i++) {
				if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

	int findmin (int arr[], int size) {
		int min = arr[0];
			for (int i = 1; i < size; i++) {
				if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

	float calculateAverage(int arr[], int size) {
		int sum = 0;
			for(int i = 0; i < size; i++ ) {
				sum += arr[i];
			}
	return static_cast<float>(sum) / size;
}

int main () {
	const int SIZE = 5;
	int number[SIZE];
	
	cout<<"Masukkan "<< SIZE << " angka : " <<endl;
	for(int i = 0; i < SIZE; i++) {
		cout<<"Angka ke-" << (i+1) << ": ";
		cin>> number[i];
	}
	
	int max = findmax(number,SIZE);
	int min = findmin(number,SIZE);
	float average = calculateAverage(number,SIZE);
	
	cout << "Nilai Maksimum : " << max <<endl;
	cout << "Nilai Minimum : " << min <<endl;
	cout << "Rata-Rata : " << average <<endl;
	
	return 0;
}
