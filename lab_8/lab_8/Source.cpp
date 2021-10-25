#include <iostream>
using namespace std;

void main() {
    // task 1
    int a;
    cin >> a;
    if (a % 1024 == 0) {
        cout << a % 1024;
    }
    else {
        cout << a % 1024 + 1;
    }

    //// task 2
   /* int a, b, c = 0;

    cout << "big: ";
    cin >> a;
    cout << "small: ";
    cin >> b;

    while (a - b >= 0)
    {
        c++;
        a-= b;
    }
    cout << "amount of small sections in a big section: " << c << endl;*/

    //// task 3
    /*int a1, b, a2;
    int s = 0;
    cout << "bigger section: ";
    cin >> a1;
    cout << "smaller section: ";
    cin >> b;
    a2 = a1;
    while (a1 - b >= 0)
    {
        s+= b;
        a1-= b;
    }
    cout << "the length of a free part of the A:" << a2 - s << endl;*/

    //// task 4
   /* int x, x1, x2;
    cout << "initial number: ";
    cin >> x;
    x1 = x / 10;
    x2 = x % 10;
    cout << "result number: " << x2 * 10 + x1 << endl;*/

    //// task 5
    /*int a, b;
    cout << "enter the number: ";
    cin >> a;
    cout << "result number: " << a % 100 * 10 + (a / 100) << endl;*/
}