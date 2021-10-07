#include <iostream>
using namespace std;

void main() {
	// task 1
	/*const int n = 10;
	int arr[n];
	int k = 3;
	int l = 8;
	int count = 0;
	int sum = 0;
	float median = 0;

	for (int i = 0; i < n; i++) {
		arr[i] = i + 8;
	}

	for (int i = k; i <= l; i++) {
		sum += arr[i];
		count++;
	}

	median =(float)sum / count;

	for (int i = 0; i < n; i++) {
		cout << arr[i] << "  ";
	}
	cout << endl;

	cout << "K = " << k << " - start of count" << endl;
	cout << "L = " << l << " - end of count" << endl;

	cout << "Median = " << median << endl;*/

	// task 2
	/*int arr[5];
	bool check = true;
	for (int i = 0; i < 5; i++) {
		cout << "Enter the number ";
		cin >> arr[i];
	}
	
	int d = arr[1] - arr[0];
	for (int i = 0; i < 4; i++) {
		if (arr[i + 1] - arr[i] != d) {
			check = false;
			break;
		}
	}

	if (check == false) {
		cout << "Incorrect" << endl;
		cout << 0 << endl;
	}
	else {
		cout << "Correct!!!" << endl;
		cout << d << endl;
	}*/

	// task 3
	/*int arr[10];
	int min = 0;

	for (int i = 0; i < 10; i++) {
		cout << "Enter the number ";
		cin >> arr[i];
	}

	min = arr[0];

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			if (arr[i] < min) {
				min = arr[i];
			}
		}
	}

	cout << "Min number from the range = " << min << endl;*/

	// task 4
	/*int arr[10];
	for (int i = 0; i < 10; i++) {
		cout << "Enter the number ";
		cin >> arr[i];
	}
	int max = arr[1];
	for (int i = 1; i < 9; i++) {
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
	}

	cout << "Local max = " << max << endl;*/

	// task 5
	/*int arr[10];
	int element1, element2;
	int index1, index2;
	int count2 = 0;

	for (int i = 0; i < 10; i++) {
	cout << "Enter the number ";
		cin >> arr[i];
	}

	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = 0; j < 10; j++) {
			if (arr[j] == arr[i]) {
				count++;
			}
		}
		if (count == 2) {
			for (int k = 0; k < 10; k++) {
				if (arr[k] == arr[i]) {
					if (count2 == 0 || count2 == 1) {
						cout << "Index = " << k << endl;
						count2++;
					}

				}
			}
		}
		else {
			count = 0;
		}
	}*/
}