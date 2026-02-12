#include <iostream>
using namespace std;

	int hitung(int C, int D);
	int tambah(int X, int Y);

		int main () {
			int A, B, T;
			A = 5; B = 2;
			T = hitung(A,B);
			 cout<< T <<endl;
} 
	int hitung(int C, int D) {
		int E;
		C = C * 2;
		D = D * 2;
		E = tambah (C,D);
		return(E);
}	
	int tambah(int X, int Y) {
		int Z;
		Z = X + Y;
		return(Z);
}
