#include<iostream>
using namespace std;

void fillTempArr(int arr[], int arrTemp[] ,int size) {
	for (int i = 0; i < size; i++) {
		arrTemp[i] = arr[i];
	}
}

void showArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void main() {
	// task 1
	//const int n = 10;
	//int arr1[n]{ 1,5,3,6,7,3,5,7,5,3 };
	//int arr2[n]{ 1,2,3,4,5,6,7,8,9,10 };
	//int arrTemp[n];

	//showArr(arr1, n);
	//showArr(arr2, n);

	//fillTempArr(arr1, arrTemp, n);

	//for (int i = 0; i < n; i++) {
	//	arr1[i] = arr2[i];
	//	arr2[i] = arrTemp[i];
	//}

	//cout<<"============================================"<<endl;

	//showArr(arr1, n);
	//showArr(arr2, n);

	// task 2
	//const int n = 10;
	//int arr1[n]{ 1,5,3,6,7,3,5,7,5,3 };
	//float arr2[n];
	//int sum = 0;
	//int count = 0;

	//for (int i = 0; i < n; i++) {
	//	sum += arr1[i];
	//	count++;
	//	arr2[i] = (float)sum / count;
	//}

	//showArr(arr1, n);
	//
	//for (int i = 0; i < n; i++) {
	//	cout << arr2[i] << "  ";
	//}

	// task 3
	/*const int n = 10;
	int arr[n]{ 1,5,3,6,7,3,5,7,5,3 };
	int nech = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			nech = i;
		}
	}

	if (nech != 0) {
		for (int i = 0; i < n; i++) {
			if (arr[i] % 2 != 0) {
				arr[i] += nech;
			}
		}
	}

	showArr(arr, n);*/

	// task 4
	/*const int n = 10;
	int arr[n]{ 1,5,3,6,7,3,5,7,5,3 };
	int min = arr[0];
	int max = arr[0];
	int indexMin = 0;
	int indexMax = 0;

	showArr(arr, n);

	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			indexMin = i;
		}
		if (arr[i] > max) {
			max = arr[i];
			indexMax = i;
		}
	}

	if (indexMin < indexMax) {
		for (int i = 0; i < n; i++) {
			if (i > indexMin && i < indexMax) {
				arr[i] = 0;
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (i < indexMin && i > indexMax) {
				arr[i] = 0;
			}
		}
	}

	showArr(arr, n);*/

	// task 5
	/*const int lenD = 10;
	int data[lenD]{ 10,5,3,6,7,3,5,7,5,3 };
	int tmp = 0;
	for (int i = 1; i < lenD; i++) {
		for (int j = (lenD - 1); j >= (i + 1); j--) {
			if (data[j] < data[j - 1]) {
				tmp = data[j];
				data[j] = data[j - 1];
				data[j - 1] = tmp;
			}
		}
	}
	showArr(data, lenD);

	int tempItem = data[7];
	data[7] = data[0];
	data[0] = tempItem;
	tmp = 0;
	for (int i = 0; i < lenD; i++) {
		for (int j = (lenD - 1); j >= (i + 1); j--) {
			if (data[j] < data[j - 1]) {
				tmp = data[j];
				data[j] = data[j - 1];
				data[j - 1] = tmp;
			}
		}
	}
	showArr(data, lenD);*/
}