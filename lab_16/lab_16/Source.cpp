#include <iostream>
#include <algorithm>
using namespace std;

void showArray(int* arr,int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}
}

bool comp(int a, int b)
{
	if (a > b) return true;
	else return false;
}

void main() {
	// task 1
	/*const int n = 5;
	int arr[n];
	int k = 1;

	for (int i = 0; i < n; i++) {

		arr[i] = k;
		k += 2;

		cout << arr[i] << endl;
	}*/

	// task 2
	/*const int n = 10;
	int a = 2;
	int d = 3;
	int k = 1;
	int arr[n];

	for (int i = 0; i < n - 1; i++) {
		if (i == 0) {
			arr[i] = a;
		}
		else {
			arr[i] = a * pow(d, k);
			k += 1;
		}

		cout << arr[i] << endl;
	}*/

	//  task 3
	/*const int n = 10;
	int a = 3;
	int b = 5;
	int arr[n];

	int sum = a + b;

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			arr[i] = a;
		}
		else if (i == 1) {
			arr[i] = b;
		}
		else {
			arr[i] = sum;
			sum += arr[i - 1];
		}
	}*/

	// task 4
	/*const int n = 7;
	int arr[n];

	int k = n - 1;
	int g = 0;

	int t = 1;

	for (int i = 0; i < n; i++) {
		arr[i] = i;
		cout << arr[i] << " ";;
	}
	cout << endl;
	cout << "kirill gay" << endl;

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << arr[i] << endl;
		}
		else {
			if (!(i % 2 == 0)) {
				cout << arr[k - g]<<endl;
				g += 1;
			}
			else {
				cout << arr[t] << endl;
				t += 1;
			}
		}
	}*/

	// task 5
	int sizeEven = 0;
	int sizeOdd = 0;

	int arr1[10];

	int countArr2 = 0;
	int countArr3 = 0;

	for (int i = 0; i < 10; i++) {
		arr1[i] = i;
		if (i % 2 == 0) {
			sizeEven += 1;
		}
		else {
			sizeOdd += 1;
		}
	}

	int* arr2 = new int[sizeEven];
	int* arr3 = new int[sizeOdd];


	for (int i = 0; i < 10; i++) {
		if (arr1[i] % 2 == 0) {
			arr2[countArr2] = arr1[i];
			countArr2 += 1;
		}
		else {
			arr3[countArr3] = arr1[i];
			countArr3 += 1;
		}
	}

	sort(arr2, arr2 + sizeEven, comp);

	showArray(arr1, 10);
	cout << "===========================" << endl;

	showArray(arr2, sizeEven);
	cout << "===========================" << endl;

	showArray(arr3, sizeOdd);

	delete[] arr2;
	delete[] arr3;


}