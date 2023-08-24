/*
Beau Simon
beau.a.simon@und.edu
Assignment #3 - C++

This is our third assignment for CSCI 265. This is the C++ portion.
*/

#include <iostream>
using namespace std;

bool isOdd(int value) {
    return value % 2 != 0;
}

bool isEven(int value) {
    return !isOdd(value);
}

void multiplicationTable(int multiplier, int numberOfItems) {
    for (int i = 1; i <= numberOfItems; i++) {
        int result = multiplier * i;
        cout << i << " * " << multiplier << " = " << result << endl;
    }
}

int sumOfOdds(int value) {
    int sum = 0;
    for (int i = 1; i <= value; i++) {
        if (isOdd(i)) {
            sum += i;
        }
    }
    return sum;
}

bool isNotAFactor(int value1, int value2) {
    return value1 % value2 != 0;
}

int valuesBetween(int lower, int upper, int incr) {
    int count = 0;
    for (int i = lower; i <= upper; i += incr) {
        count++;
    }
    return count;
}

void irTriangle(int side, char character, char fillChar = ' ') {
    for (int i = 1; i <= side; i++) {
        if (i == 1 || i == side) {
            string line(i, character);
            cout << line << endl;
        } else {
            string line = character + string(i-2, fillChar) + character;
            cout << line << endl;
        }
    }
}

int main() {
    // Test isOdd
    cout << boolalpha << isOdd(3) << endl;   // Output: true
    cout << boolalpha << isOdd(4) << endl;   // Output: false

    // Test isEven
    cout << boolalpha << isEven(3) << endl;  // Output: false
    cout << boolalpha << isEven(4) << endl;  // Output: true

    // Test multiplicationTable
    multiplicationTable(4, 3);

    // Test sumOfOdds
    cout << sumOfOdds(9) << endl;  // Output: 25

    // Test isNotAFactor
    cout << boolalpha << isNotAFactor(10, 3) << endl;  // Output: true
    cout << boolalpha << isNotAFactor(10, 2) << endl;  // Output: false

    // Test valuesBetween
    cout << valuesBetween(1, 10, 2) << endl;  // Output: 5

    // Test irTriangle
    irTriangle(5, '*');

    return 0;
}
