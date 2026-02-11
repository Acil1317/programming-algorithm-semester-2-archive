#include <iostream>
using namespace std;

int main () {
	int A[2][4];
	
	for (int i = 0; i <=2; i++) {
		for(int j = 0; j<=4; j++) {
			A[i][j] = j;
			cout<<"A[" << i << "]" << "[" << j << "]" << "J" <<endl;
		}
	}

	  return 0;
}
