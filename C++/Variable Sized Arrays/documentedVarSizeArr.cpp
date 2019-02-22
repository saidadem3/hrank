#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int problems, int **arr) {
		for (int i = 0; i < problems; i++) {
				cout << "Enter index you could like to access: ";
				int row, col;
				cin >> row >> col;
				cout << "a[" << row << "][" << col << "] is: " << arr[row][col] << endl;
		}
}

int main() {
		//User first inputs number of arrays they will input then the number of problems to solve
		//ex: 3 2 would be 3 arrays then solve find 2 different indexes
		int numArrays, problems, cols;
		
		cout << "Input number of arrays and problems: ";
		cin >> numArrays >> problems;
		cout << "Number of arrays are: " << numArrays << endl << "Number of problems to solve: " << problems << endl;
		int** arr = new int*[numArrays];

		//Here we let the user declare how many elements are in the array and add their respective index
		//To better visualize this loop you can think of numArrays as rows and cols as columns to access the index at arr[numArrays][cols]
		for (int i = 0; i < numArrays; i++) {
				cout << "How many elements would you like: ";
				cin >> cols;
				arr[i] = new int[cols];
				for (int j = 0; j < cols; j++) {
						cout << "Add element at index arr[" << i << "][" << j  << "]: ";
						int addelement;
						cin >> addelement;
						arr[i][j] = addelement;
				}
		}

		printArr(problems, arr);

		return 0;
}