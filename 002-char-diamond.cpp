//
// Created by lance on 23-5-12.
//
#include <iostream>

using namespace std;

int main() {
    char a;
    cin >> a;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < abs(2-i); j++) {
            cout << ' ';
        }
        for (int k = 0; k < (5-abs(i-2)*2); k++) {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}