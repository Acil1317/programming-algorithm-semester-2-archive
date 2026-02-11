#include <iostream>
using namespace std;

int main() {
	
	int rows = 3;
 	int cols = 3;
	int matriks[rows][cols];
	int sum = 0;
	
	cout << "Masukkan elemen matriks " << rows << "x" << cols << ":" <<endl;
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++){
			cout << "Elemen [" << i << "][" << j << "]: ";
			cin>> matriks[i][j];
			sum += matriks[i][j];
		}
	  }
	  
	cout<<"\nMatriks yang dimasukkan :" <<endl;
	 for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++){
			cout <<"\t" << matriks[i][j];
		}
		cout<< endl;
	  }
	  
	  cout<<"Jumlah semua elemen dalam matriks: " << sum <<endl;
	  
	  return 0;
}
