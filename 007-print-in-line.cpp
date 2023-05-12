//
// Created by lance on 23-5-12.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << setw(8) << right << a << " "
         << setw(8) << right << b << " "
         << setw(8) << right << c << endl;
    return 0;
}