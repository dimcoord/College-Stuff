#include <bits/stdc++.h>
#include <chrono>
using namespace std;

void bubbleSort(vector<int>& arr) {
	int n = arr.size();
	bool swapped;

	for (int i = 0; i < n - 1; i++) {
		swapped = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				swapped = true;
			}
		}
		if (!swapped) break;
	}
}

double benchmark250() {
	vector<int> arr(250);
	for (int i = 0; i < 250; i++) arr[i] = i;
	random_device rd;
	mt19937 gen(rd());
	shuffle(arr.begin(), arr.end(), gen);

	auto start = chrono::high_resolution_clock::now();
	bubbleSort(arr);
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
	bubbleSort(arr);
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
	bubbleSort(arr);
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
	bubbleSort(arr);
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