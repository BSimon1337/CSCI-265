/*
Beau Simon
beau.a.simon@und.edu
Assignment #2 - C++

This is our second assignment for CSCI 265. This is the C++ portion.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int first_value, second_value;
    float credits;
    string year;
    string correct_year;

    cout << "This section will ask for two integers" << endl;

    // Get the first value from the user
    cout << "Enter the first value: ";
    cin >> first_value;

    // Check if the first value is a multiple of 5
    if (first_value % 5 == 0) {
        cout << first_value << " is a multiple of 5." << endl;
    } else {
        cout << first_value << " is not a multiple of 5." << endl;
    }

    // Check if the first value is even or odd
    if (first_value % 2 == 0) {
        cout << first_value << " is even." << endl;
    } else {
        cout << first_value << " is odd." << endl;
    }

    // Check if the first value is positive, negative, or zero
    if (first_value > 0) {
        cout << first_value << " is positive." << endl;
    } else if (first_value < 0) {
        cout << first_value << " is negative." << endl;
    } else {
        cout << first_value << " is zero." << endl;
    }

    // Check if the first value is within the range of 2020 to 2023 inclusive
    if (first_value >= 2020 && first_value <= 2023) {
        cout << first_value << " is within the range of 2020 to 2023." << endl;
    } else {
        cout << first_value << " is not within the range of 2020 to 2023." << endl;
    }

    // Get the second value from the user
    cout << "Enter the second value: ";
    cin >> second_value;

    // Compare the second value with the first value
    if (second_value < first_value) {
        cout << "The second value is less than the first value." << endl;
    } else if (second_value > first_value) {
        cout << "The second value is greater than the first value." << endl;
    } else {
        cout << "The second value is equal to the first value." << endl;
    }

    cout << "This program will ask a user for credits and presumed year in college." << endl;

    // Get the number of credits from the user
    cout << "Enter number of credits: ";
    cin >> credits;

    // Get the anticipated year from the user
    cout << "Enter anticipated year (Freshman, Sophomore, Junior, Senior): ";
    cin >> year;

    // Check if the anticipated year is correct based on the number of credits
    if (credits >= 0 && credits <= 23) {
        correct_year = "Freshman";
    } else if (credits >= 24 && credits <= 59) {
        correct_year = "Sophomore";
    } else if (credits >= 60 && credits <= 89) {
        correct_year = "Junior";
    } else if (credits >= 90) {
        correct_year = "Senior";
    }

    // Print the result
    if (correct_year == year) {
        cout << "A student with " << credits << " credits is a " << year << "." << endl;
    } else {
        cout << "A student with " << credits << " credits is not a " << year << ". You are a " << correct_year << "." << endl;
    }

    return 0;
}