#include <iostream>
using namespace std;

int main () {

	int matrix[3][3] = {
			{1,2,3},
			{4,5,6},
			{7,8,9}
	};
	
	int temp = 0;
	for(int col = 0; col < 3; col++){
			for(int row = 0; row < 3; row++){
					if(matrix[col][row] > temp){
						temp = matrix[col][row];
					}
			}
	}	
	
	int matrixs[3][3] = {
			{9,8,7},
			{6,5,4},
			{3,2,1}
	};
	
	int result[3][3];
	for(int col = 0; col < 3; col++){
			for(int row = 0; row < 3; row++){
					result[col][row] = matrix[col][row] + matrixs[col][row];
			}
	}	
	
	cout << "---The result of matrix addition is : " <<endl;
	for(int col = 0; col < 3; col++){
			for(int row = 0; row < 3; row++){
				cout <<"\t" << result[col][row];
			}
		cout << endl;
	}
}
