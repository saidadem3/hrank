#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;
    int *arr;
    arr = new int[size];
    
    for(int i = 0; i<size; i++)
    {
        cin >> arr[i];
    }
    for(int i = size-1; i>-1; i--)
    {
        cout << arr[i] << " ";
    }
    
    delete [] arr;
    arr = NULL;
    return 0;
}
