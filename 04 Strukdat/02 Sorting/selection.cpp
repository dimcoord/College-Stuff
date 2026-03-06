#include <iostream>
using namespace std;

int* selection(int* arr, int n){
	int last_index = n-1;
	for(int i=0; i<=last_index; i++){
		int minimum = i;
		for(int j=i+1; j<=last_index; j++){
			if(arr[j] < arr[minimum]){
				minimum = j;
			}
		}
		int swap = arr[i];
		arr[i] = arr[minimum];
		arr[minimum] = swap;
	}
	return arr;
}

int main(){
	int arr[] = {3, 1, 2, 9, 4, 10, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	int* arred = selection(arr, n);

	for(int i=0; i<3; i++){
		cout << arred[i];
	}

	return 0;
}