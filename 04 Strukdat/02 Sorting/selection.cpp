#include <bits/stdc++.h>
#include <chrono>
using namespace std;

void selectionSort(vector<int>& arr) {
	int n = arr.size();

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
}

double benchmark250() {
	vector<int> arr(250);
	for (int i = 0; i < 250; i++) arr[i] = i;
	random_device rd;
	mt19937 gen(rd());
	shuffle(arr.begin(), arr.end(), gen);

	auto start = chrono::high_resolution_clock::now();
	selectionSort(arr);
	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> duration = end - start;
	return duration.count();
}

double benchmark500() {
	vector<int> arr(500);
	for (int i = 0; i < 500; i++) arr[i] = i;
	random_device rd;
	mt19937 gen(rd());
	shuffle(arr.begin(), arr.end(), gen);

	auto start = chrono::high_resolution_clock::now();
	selectionSort(arr);
	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> duration = end - start;
	return duration.count();
}

double benchmark750() {
	vector<int> arr(750);
	for (int i = 0; i < 750; i++) arr[i] = i;
	random_device rd;
	mt19937 gen(rd());
	shuffle(arr.begin(), arr.end(), gen);

	auto start = chrono::high_resolution_clock::now();
	selectionSort(arr);
	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> duration = end - start;
	return duration.count();
}

double benchmark1000() {
	vector<int> arr(1000);
	for (int i = 0; i < 1000; i++) arr[i] = i;
	random_device rd;
	mt19937 gen(rd());
	shuffle(arr.begin(), arr.end(), gen);

	auto start = chrono::high_resolution_clock::now();
	selectionSort(arr);
	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> duration = end - start;
	return duration.count();
}

int main() {
	cout << fixed << setprecision(9);
	cout << "250 elements  : " << benchmark250() << " seconds\n";
	cout << "500 elements  : " << benchmark500() << " seconds\n";
	cout << "750 elements  : " << benchmark750() << " seconds\n";
	cout << "1000 elements : " << benchmark1000() << " seconds\n";

	return 0;
}