#include <bits/stdc++.h>
#include <chrono>
using namespace std;

void heapify(vector<int>& arr, int n, int i) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && arr[left] > arr[largest]) {
		largest = left;
	}

	if (right < n && arr[right] > arr[largest]) {
		largest = right;
	}

	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

void heapSort(vector<int>& arr) {
	int n = arr.size();

	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n, i);
	}

	for (int i = n - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

double benchmark250() {
	vector<int> arr(250);
	for (int i = 0; i < 250; i++) arr[i] = i;
	random_device rd;
	mt19937 gen(rd());
	shuffle(arr.begin(), arr.end(), gen);

	auto start = chrono::high_resolution_clock::now();
	heapSort(arr);
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
	heapSort(arr);
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
	heapSort(arr);
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
	heapSort(arr);
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