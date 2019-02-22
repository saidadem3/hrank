#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int problems, int **arr) {
		for (int i = 0; i < problems; i++) {
				int row, col;
				cin >> row >> col;
				cout << arr[row][col] << endl;
		}
}

int main() {
		//very well documented version on my github: github.com/saidadem3
		int numArrays, problems, cols;
		
		cin >> numArrays >> problems;
		int** arr = new int*[numArrays];

		for (int i = 0; i < numArrays; i++) {
				cin >> cols;
				arr[i] = new int[cols];
				for (int j = 0; j < cols; j++) {
						int addelement;
						cin >> addelement;
						arr[i][j] = addelement;
				}
		}

		printArr(problems, arr);

		return 0;
}