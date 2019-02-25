#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
		int size, problems, element;
		cout << "How many size would you like to input: ";
		cin >> size;

		int *arr = (int*)malloc(sizeof(int) * size); //same as int *arr = new int[size]

		for (int i = 0; i < size; i++) {
				cout << "Index [" << i+1 << "]: ";
				cin >> element;
				arr[i] = element;
		}

		cout << "How many problems do you have: ";
		cin >> problems;
		
		//Asks user for an element and checks if it exists in the arry
		//If it exists it will print Yes then the index it is located by
		//If it doesn't exist it will print No and then print the index of the closest integer
		//Added error checking (Out of Scope) for completeness
		//Indexing print starts at 1
		for (int i = 0; i < problems; i++) {
				cout << "What number would you like to look up: ";
				cin >> element;
				for (int j = 0; j < size; j++) {
						if (arr[j] == element) {
								cout << "Yes " << j + 1 << endl;
								break;
						}
						else if ((arr[j] > element) && (element < arr[size-1])) {
								cout << "No " << j + 1 << endl;
								break;
						}
						//if I just do else then something funky happens (ask ahmad)
						else if (element > arr[size-1]){
								cout << "Out of Scope" << endl;
								break;
						}
				}
		}

		return 0;
}