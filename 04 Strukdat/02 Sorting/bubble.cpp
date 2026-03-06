#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {30, 4, 3, 38, 5, 50, 2, 1, 44, 5, 40, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	bool swapped;

	for(int i = 0; i < n-1; i++){
		swapped = false;
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				// swap(arr[j], arr[j+1]);
				int t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
				swapped = true;
			}
		}
		if(!swapped) break;
		cout << "Iterasi ke-" << i+1 << ": ";
		for(int j=0; j < n; j++){
			cout << arr[j] << " ";
			if(n-j==1){
				cout << endl;
			}
		}
	}

	return 0;
}