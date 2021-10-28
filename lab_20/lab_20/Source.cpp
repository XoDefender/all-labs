#include<iostream>

using namespace std;

bool checkArr(int arr[], const int size, int iter, int* amount) {
	int length = 3;

	for (int i = iter; i < size; i++) {
		if (arr[i] == arr[i + 1]) {
			(*amount)++;
		}
		else {
			if (*amount > length) {
				return true;
			}
			else {
				return false;
			}
		}
	}
}

float calculateP(int dots[3][2]) {
	float result = 0; // perimetre
	result += sqrt(pow(dots[0][0] - dots[2][0], 2) + pow(dots[0][1] - dots[2][1], 2)); // calculate the side of the triangle
	result += sqrt(pow(dots[0][0] - dots[1][0], 2) + pow(dots[0][1] - dots[1][1], 2)); // calculate the side of the triangle
	result += sqrt(pow(dots[1][0] - dots[2][0], 2) + pow(dots[1][1] - dots[2][1], 2)); // calculate the side of the triangle

	return result;
}

// task 1
//void main() {
//	const int STATICSIZE = 10;
//	int size = 0;
//
//	int count = 1;
//	bool check = true;
//
//	int arr1[STATICSIZE];
//	int* arr2 = new int[size];
//	char* arr3 = new char[size];
//
//	for (int i = 0; i < STATICSIZE; i++) {
//		cin >> arr1[i];
//	}
//
//	for (int i = 0; i < STATICSIZE - 1; i++) {
//		if (arr1[i] == arr1[i + 1]) {
//			if (check) size++;
//			count++;
//
//			arr2[size - 1] = count;
//			arr3[size - 1] = arr1[i] + '0';
//
//			check = false;
//		}
//		else {
//			count = 1;
//			check = true;
//		}
//	}
//
//	for (int i = 0; i < size; i++) {
//		cout << arr2[i] << " ";
//	}
//	cout << endl;
//	cout << "====================================" << endl;
//	for (int i = 0; i < size; i++) {
//		cout << arr3[i] << " ";
//	}
//
//	delete[] arr2;
//	delete[] arr3;
//}

//task 2
//void main() {
//		const int SIZE = 10;
//		int arr1[SIZE];
//	
//		int size = 10;
//		int length = 3;
//		int amount = 1;
//		bool check = true;
//	
//		for (int i = 0; i < SIZE; i++) {
//			cin >> arr1[i];
//		}
//	
//		for (int i = 0; i < SIZE - 1; i++) {
//			if (arr1[i] == arr1[i + 1]) {
//				amount++;
//				if (i == SIZE - 2) {
//					size -= amount - 1;
//					amount = 1;
//				}
//			}
//			else {
//				if (amount > length) {
//					size-= amount - 1;
//				}
//				amount = 1;
//			}
//		}
//	
//		int* arr2 = new int[size];
//		int count = 0;
//	
//		for (int i = 0; i < SIZE;) {
//			if (count == size) break;
//			if (checkArr(arr1, SIZE, i,&amount)) {
//				arr2[count] = 0;
//				count++;
//				i += amount;
//				amount = 1;
//			}
//			else if(!checkArr(arr1, SIZE, i,&amount)) {
//				arr2[count] = arr1[i];
//				count++;
//				i++;
//				amount = 1;
//			}
//		}
//	
//		for (int i = 0; i < size; i++) {
//			cout << arr2[i] << " ";
//		}
//	
//		delete[] arr2;
//	}

// test 3
//void main() {
//	const int SIZE = 10;
//	int arr1[SIZE];
//	int arr2[SIZE];
//
//	int count = 0;
//	int countGap = 0;
//	int countAllGaps = 0;
//
//	int k = 2;
//
//	int startK = arr1[0];
//	int endK = 0;
//
//	int startLast = 0;
//	int endLast = 0;
//
//	int valueK = 0;
//	int valueLast = 0;
//
//	int countK = 0;
//	int countLast = 0;
//
//	for (int i = 0; i < SIZE; i++) {
//		cin >> arr1[i];
//	}
//
//	for (int i = 1; i < SIZE; i++) {
//		if (arr1[i] == arr1[i - 1]) {
//			count++;
//		}
//		else if (count > 0) {
//			countGap++;
//			if (countGap == k) {
//				startK = i - count;
//				endK = i;
//
//			}
//		}
//		else {
//			count = 0;
//		}
//	}
//	
//}

//task 3
//void main() {
//	const int SIZE = 10;
//	int k = 2;
//	int nums[SIZE];
//
//	for (int i = 0; i < SIZE; i++) {
//		cin >> nums[i];
//	}
//
//	int gapCount = 0;
//
//	int replaceK = 0;
//	int replaceL = 0;
//	int replaceVal = 0;
//
//	int lastK = 0;
//	int lastL = 0;
//	int lastVal = nums[0];
//
//	int tempK = 0;
//	int tempL = 1;
//	int tempVal = nums[0];
//
//	for (int i = 1; i < SIZE; i++) {
//		int value = nums[i];
//
//		if (tempVal == value) {
//			tempL++;
//
//			if (i + 1 == SIZE) {
//				lastK = tempK;
//				lastL = tempL;
//				lastVal = tempVal;
//
//				gapCount++;
//
//				if (gapCount == k) {
//					replaceK = tempK;
//					replaceL = tempL;
//					replaceVal = tempVal;
//				}
//			}
//
//			continue;
//		}
//		else {
//			if (tempL > 1) {
//				gapCount++;
//
//				lastK = tempK;
//				lastL = tempL;
//				lastVal = tempVal;
//
//				if (gapCount == k) {
//					replaceK = tempK;
//					replaceL = tempL;
//					replaceVal = tempVal;
//				}
//			}
//
//			tempK = i;
//			tempL = 1;
//			tempVal = value;
//
//		}
//
//	}
//
//	cout << "----------------------------" << endl;
//	cout << "last: " << lastK << " " << lastL << " " << lastVal << endl;
//	cout << "replace: " << replaceK << " " << replaceL << " " << replaceVal << endl;
//	cout << "----------------------------" << endl;
//
//	int rNums[SIZE];
//	int ri = 0;
//
//	for (int i = 0; i < SIZE; i++) {
//		int value = nums[i];
//
//		if (i == replaceK) {
//			for (int k = 0; k < lastL; k++, ri++) {
//				rNums[ri] = lastVal;
//			}
//			i += replaceL - 1;
//
//			continue;
//		}
//
//		if (i == lastK) {
//			for (int k = 0; k < replaceL; k++, ri++) {
//				rNums[ri] = replaceVal;
//			}
//
//			i += lastL - 1;
//
//			continue;
//		}
//
//		rNums[ri] = value;
//		ri++;
//	}
//
//
//	for (int i = 0; i < SIZE; i++) {
//		cout << rNums[i] << " ";
//	}
//	cout << endl << endl;
//}

// task 4
//void main() {
//	int dots[12][2]; // dots in space
//	int length = (sizeof(dots) / sizeof(int)) / 2; // accurate length of the array
//	int startIndex = length / 4; // start index of 2 quatre
//	int endIndex = startIndex + (length / 4) - 1; // end index of 2 quatre
//	int maxDistanceIndex = startIndex; // distance from a dot to the start of coordinates
//
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 2; j++) {
//			cin >> dots[i][j];
//		}
//	}
//
//	for (int i = startIndex; i <= endIndex; i++) { // iteration of elements of 2 quatre
//		if (sqrt(pow(dots[maxDistanceIndex][0] - 0, 2) + pow(dots[maxDistanceIndex][1] - 0, 2)) < sqrt(pow(dots[i][0] - 0, 2) + pow(dots[i][1] - 0, 2))) { // compare the distance between earlier memorized dot and current dot
//			maxDistanceIndex = i;
//		}
//	}
//	cout << "dotIndexes = "<<dots[maxDistanceIndex][0]<<" "<< dots[maxDistanceIndex][1];
//}

// task 5
//void main() {
//	int dots[5][2]; // dots in space
//	int length = (sizeof(dots) / sizeof(int)) / 2; // accurate length of the array
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 2; j++) {
//			cin >> dots[i][j];
//		}
//	}
//
//	int triangle[3][2]; // triangle dots
//
//	for (int dot0 = 0; dot0 < length; dot0++) { // combinations of triangles
//		for (int dot1 = 0; dot1 < length; dot1++) {
//			for (int dot2 = 0; dot2 < length; dot2++) {
//				if (dot0 != dot1 && dot0 != dot2 && dot1 != dot2) { // if dots are different
//					int tempTriangle[3][2]; // create temp triangle to compare with real triangle
//
//					tempTriangle[0][0] = dots[dot0][0];
//					tempTriangle[0][1] = dots[dot0][1];
//
//					tempTriangle[1][0] = dots[dot1][0];
//					tempTriangle[1][1] = dots[dot1][1];
//
//					tempTriangle[2][0] = dots[dot2][0];
//					tempTriangle[2][1] = dots[dot2][1];
//
//					if (calculateP(tempTriangle) > calculateP(triangle)) { // compare perimetres of triangles
//						triangle[0][0] = tempTriangle[0][0];
//						triangle[0][1] = tempTriangle[0][1];
//
//						triangle[1][0] = tempTriangle[1][0];
//						triangle[1][1] = tempTriangle[1][1];
//
//						triangle[2][0] = tempTriangle[2][0];
//						triangle[2][1] = tempTriangle[2][1];
//					}
//				}
//			}
//		}
//	}
//	cout << "calculateTriangle = " << calculateP(triangle);
//}
