#include <iostream>
#include <cmath>
using namespace std;

void main() {
	// task 1
	/*int a[2]{1,3};
	int b[2]{ 4,2 };

	int ab[2];
	ab[0] = a[0] - b[0];
	ab[1] = a[1] - b[1];

	cout << ab[0]<<" "<<ab[1] << endl;*/

	//task 2
	/*int a = 5;
	int b = 6;
	int c = 7;

	int ac = fabs(c - a);
	int bc = fabs(c - b);

	int sum = ac + bc;

	cout << "AC = " << ac << endl;
	cout << "BC = " << bc << endl;
	cout << "Summa = " << sum << endl;*/

	// task 3
	/*int a = 5;
	int b = 7;
	int c = 6;

	int ac = fabs(c - a);
	int bc = fabs(c - b);

	int mult = ac * bc;

	cout << "AC = " << ac << endl;
	cout << "BC = " << bc << endl;
	cout << "Multiply = " << mult << endl;*/

	// task 4
	/*int a[2]{ 2,4 };
	int c[2]{ 5,2 };
	int b[2]{ 2,2 };

	int ab = sqrt(pow((a[0] - b[0]),2) + pow(a[1] - b[1],2));
	int ac = sqrt(pow((a[0] - c[0]), 2) + pow(a[1] - c[1], 2));
	int bc = sqrt(pow((b[0] - c[0]), 2) + pow(b[1] - c[1], 2));

	double s = (double)(ab * bc) / 2;
	int p = ab + ac + bc;

	cout << "S = " << s << endl;
	cout << "P = " << p << endl;*/

	// task 5
	/*int a[2]{ 2,4 };
	int b[2]{ 5,4 };
	int c[2]{ 8,6 };

	int ab = sqrt(pow((a[0] - b[0]), 2) + pow(a[1] - b[1], 2));
	int ac = sqrt(pow((a[0] - c[0]), 2) + pow(a[1] - c[1], 2));
	int bc = sqrt(pow((b[0] - c[0]), 2) + pow(b[1] - c[1], 2));

	int p = ab + ac + bc;
	double pp = p / 2;
	double s = sqrt(p * (p - ab) * (p - bc) * (p - ac));

	cout << "S = " << s << endl;
	cout << "P = " << p << endl;*/
}