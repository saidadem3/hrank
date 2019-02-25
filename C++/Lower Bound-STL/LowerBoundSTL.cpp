#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
		//documented version on my github: github.com/saidadem3
		int size, problems, element;
		cin >> size;

		int *arr = (int*)malloc(sizeof(int) * size); //same as int *arr = new int[size]

		for (int i = 0; i < size; i++) {
				cin >> element;
				arr[i] = element;
		}

		cin >> problems;
		
		for (int i = 0; i < problems; i++) {
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
				}
		}

		return 0;
}