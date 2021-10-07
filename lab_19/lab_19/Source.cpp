#include <iostream>
using namespace std;
//void main() {
//	int size = 10; // array size
//	int* arr = new int[size]; // create ref to place into the memory
//
//	for (int i = 0; i < size; i++) {
//		cin >> arr[i]; // fill array
//	}
//
//	int newSize = 1; // a sizw of new array
//	int lastDigit = arr[0]; // last comparable element
//	for (int i = 1; i < size; i++) {
//		int digit = arr[i]; // the element to compare with
//
//		if (lastDigit != digit) { // comparison condition
//			lastDigit = digit;
//			newSize++;
//		}
//
//	}
//
//	int* newArr = new int[newSize]; // create a ref to the second array
//
//	int newIndex = 0; // index of the second array
//
//	lastDigit = arr[newIndex]; // last comparable element
//	for (int i = 0; i < size; i++) {
//		int digit = arr[i]; // the element to compare with
//
//		if (lastDigit != digit) {
//			newArr[newIndex] = lastDigit;
//			lastDigit = digit;
//			newIndex++;
//		}
//
//		if (i + 1 == size) { // consider the last element
//			newArr[newIndex] = digit;
//			newIndex++;
//		}
//		
//	}
//
//	cout << "res:";
//
//	for (int i = 0; i < newSize; i++) {
//		cout << newArr[i] << " ";
//	}
//
//	delete[] arr;
//	delete[] newArr;
//}

//void main() {
//	int size = 10; // array size
//	int* arr = new int[size]; // create ref to place into the memory
//
//	for (int i = 0; i < size; i++) {
//		cin >> arr[i]; // fill array
//	}
//
//	int max = arr[0];
//	int min = arr[0];
//
//	int indexMax = 0;
//	int indexMin = 0;
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//			indexMax = i;
//		}
//		else if (arr[i] < min) { 
//			min = arr[i];
//			indexMin = i;
//		}
//	}
//
//	int newSize = size + 2; // a size of new array
//
//	int* newArr = new int[newSize]; // create a ref to the second array
//
//	bool check = false;
//
//	for (int i = 0; i < newSize; i++) {
//		if (i == indexMin) {
//			newArr[i] = 0;
//			for (int j = i; j < newSize - 2; j++) {
//				newArr[j + 1] = arr[j];
//			}
//			check = true;
//		}
//		else if (i == indexMax) {
//			newArr[i + 2] = 0;
//			for (int j = i + 2; j < newSize - 1; j++) {
//				newArr[j + 1] = arr[j - 1];
//			}
//			check = true;
//		}
//		else {
//			if(check == false) newArr[i] = arr[i];
//		}
//	}
//
//	cout << "res: ";
//
//	for (int i = 0; i < newSize; i++) {
//		cout << newArr[i]<<" ";
//	}
//	delete[] arr;
//	delete[] newArr;
//}

//void main() {
//	int size = 10; // array size
//	int* arr = new int[size]; // create ref to place into the memory
//
//	for (int i = 0; i < size; i++) {
//		cin >> arr[i]; // fill array
//	}
//
//	int newSize = 1; // a size of new array
//
//	for (int i = 1; i < size; i++) {
//		int count = 0;
//		int digit = arr[i]; // the element to compare with
//
//		for (int j = 0; j < size; j++) {
//			if (digit == arr[j]) {
//				count++;
//			}
//		}
//
//		if (count != 2) newSize++;
//	}
//
//	int* newArr = new int[newSize]; // create a ref to the second array
//
//	int newIndex = 0; // index of the second array
//
//	for (int i = 0; i < size; i++) {
//		int count = 0;
//		int digit = arr[i]; // the element to compare with
//
//		for (int j = 0; j < size; j++) {
//			if (digit == arr[j]) {
//				count++;
//			}
//		}
//
//		if (count != 2) {
//			newArr[newIndex] = arr[i];
//			newIndex++;
//		}
//		
//	}
//
//	cout << "res:";
//
//	for (int i = 0; i < newSize; i++) {
//		cout << newArr[i] << " ";
//	}
//
//	delete[] arr;
//	delete[] newArr;
//}

//void main() {
//	int size = 10; // array size
//	int* arr = new int[size]; // create ref to place into the memory
//
//	for (int i = 0; i < size; i++) {
//		cin >> arr[i]; // fill array
//	}
//
//
//	int newSize = size; // a size of new array
//	for (int i = 1; i < size; i++) {
//		if (arr[i] < 0) newSize++;
//	}
//
//	int* newArr = new int[newSize]; // create a ref to the second array
//
//	int index = 0;
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] < 0) {
//			newArr[index] = arr[i];
//			newArr[index + 1] = 0;
//			index += 2;
//		}
//		else {
//			newArr[index] = arr[i];
//			index++;
//		}
//	}
//
//	cout << "res: ";
//
//	for (int i = 0; i < newSize; i++) {
//		cout << newArr[i]<<" ";
//	}
//	delete[] arr;
//	delete[] newArr;
//}

//void main() {
//	int size = 10; // array size
//	int* arr = new int[size]; // create ref to place into the memory
//
//	for (int i = 0; i < size; i++) {
//		cin >> arr[i]; // fill array
//	}
//
//
//	int newSize = size; // a size of new array
//	for (int i = 1; i < size; i++) {
//		if (arr[i] > 0) newSize++;
//	}
//
//	int* newArr = new int[newSize]; // create a ref to the second array
//
//	int index = 0;
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] > 0) {
//			newArr[index] = 0;
//			newArr[index + 1] = arr[i];
//			index += 2;
//		}
//		else {
//			newArr[index] = arr[i];
//			index++;
//		}
//	}
//
//	cout << "res: ";
//
//	for (int i = 0; i < newSize; i++) {
//		cout << newArr[i]<<" ";
//	}
//	delete[] arr;
//	delete[] newArr;
//}