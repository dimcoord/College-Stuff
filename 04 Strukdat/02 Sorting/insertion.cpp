#include <iostream>
using namespace std;

int* insertion(int* arr, int n){
	int last_index = n-1;
	int swap;
	for(int i=1; i<=last_index; i++){
		swap = arr[i];
		int j=i-1;
		while(j>=0 && arr[j] > swap){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = swap;
	}
	return arr;
}

int main(){
	int arr[] = {3, 1, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int* arred = insertion(arr, n);

	for(int i=0; i<3; i++){
		cout << arred[i];
	}

	return 0;
}