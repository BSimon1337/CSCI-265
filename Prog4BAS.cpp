/*
Beau Simon
beau.a.simon@und.edu
Assignment #4 - C++

This is our fourth assignment for CSCI 265. This is the C++ portion.
*/

#include <iostream>
#include <string>
using namespace std;

int findMax(const int* scoresList, int size) {
    int maxScore = scoresList[0];
    for (int i = 1; i < size; i++) {
        if (scoresList[i] > maxScore) {
            maxScore = scoresList[i];
        }
    }
    return maxScore;
}

int findMin(const int* scoresList, int size) {
    int minScore = scoresList[0];
    for (int i = 1; i < size; i++) {
        if (scoresList[i] < minScore) {
            minScore = scoresList[i];
        }
    }
    return minScore;
}

double calcAverage(const int* scoresList, int size) {
    if (size == 0) {
        return -1;
    }
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += scoresList[i];
    }
    return static_cast<double>(total) / size;
}

int findFirst(const int* theList, int size, int valueToFind) {
    for (int i = 0; i < size; i++) {
        if (theList[i] == valueToFind) {
            return i;
        }
    }
    return -1;
}

int findLast(const int* theList, int size, int valueToFind) {
    int lastIndex = -1;
    for (int i = 0; i < size; i++) {
        if (theList[i] == valueToFind) {
            lastIndex = i;
        }
    }
    return lastIndex;
}

int findAboveAverage(const int* theList, int size) {
    double average = calcAverage(theList, size);
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (theList[i] >= average) {
            count++;
        }
    }
    return count;
}

int findBelowAverage(const int* theList, int size) {
    double average = calcAverage(theList, size);
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (theList[i] < average) {
            count++;
        }
    }
    return count;
}

string findStudentWith(const string* strList, const int* intList, int size, int valueToFind) {
    for (int i = 0; i < size; i++) {
        if (intList[i] == valueToFind) {
            return strList[i];
        }
    }
    return "";
}

int main() {
    // Test arrays
    int scoresList[] = {78, 92, 85, 76, 90};
    string namesList[] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    int size = sizeof(scoresList) / sizeof(scoresList[0]);

    // Testing findMax
    cout << "Max Score: " << findMax(scoresList, size) << endl;

    // Testing findMin
    cout << "Min Score: " << findMin(scoresList, size) << endl;

    // Testing calcAverage
    cout << "Average Score: " << calcAverage(scoresList, size) << endl;

    // Testing findFirst
    cout << "First occurrence of 85: " << findFirst(scoresList, size, 85) << endl;

    // Testing findLast
    cout << "Last occurrence of 85: " << findLast(scoresList, size, 85) << endl;

    // Testing findAboveAverage
    cout << "Number of scores above or equal to average: " << findAboveAverage(scoresList, size) << endl;

    // Testing findBelowAverage
    cout << "Number of scores below average: " << findBelowAverage(scoresList, size) << endl;

    // Testing findStudentWith
    cout << "Student with score 92: " << findStudentWith(namesList, scoresList, size, 92) << endl;
    cout << "Student with score 78: " << findStudentWith(namesList, scoresList, size, 78) << endl;

    return 0;
}
