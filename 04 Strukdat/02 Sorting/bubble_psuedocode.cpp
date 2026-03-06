#include <iostream>
#include <vector>
using namespace std;

int* bubble(int* arr){
	int n = 4;
	for(int i = n; i > 1; i--){
		int j = 0;
		while(j < i){
			if(arr[j] > arr[j+1]){
				int t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
			j++;
		}
	}
	return arr;
}

int main(){
	vector<int> arred = bubble();
	for(int i : arred){cout << i << " ";}

	return 0;
}