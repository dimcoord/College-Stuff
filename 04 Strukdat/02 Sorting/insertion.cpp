#include <bits/stdc++.h>
#include <chrono>
using namespace std;

void insertionSort(vector<int>& arr) {
	int n = arr.size();

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
}

double benchmark250() {
	vector<int> arr(250);
	for (int i = 0; i < 250; i++) arr[i] = i;
	random_device rd;
	mt19937 gen(rd());
	shuffle(arr.begin(), arr.end(), gen);

	auto start = chrono::high_resolution_clock::now();
	insertionSort(arr);
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
	insertionSort(arr);
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
	insertionSort(arr);
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
	insertionSort(arr);
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