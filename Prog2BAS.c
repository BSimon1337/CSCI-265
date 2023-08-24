/*
Beau Simon
beau.a.simon@und.edu
Assignment #2 - C

This is our Second assignment for CSCI 265. This is the C portion.
*/

#include <stdio.h>
#include <string.h>


int main() {
    int first_value, second_value;
    float credits;
    char year[11];
    char correct_year[11];

    printf("This section will ask for two integers")

    // Get the first value from the user
    printf("Enter the first value: ");
    scanf("%d", &first_value);

    // Check if the first value is a multiple of 5
    if (first_value % 5 == 0) {
        printf("%d is a multiple of 5.\n", first_value);
    } else {
        printf("%d is not a multiple of 5.\n", first_value);
    }

    // Check if the first value is even or odd
    if (first_value % 2 == 0) {
        printf("%d is even.\n", first_value);
    } else {
        printf("%d is odd.\n", first_value);
    }

    // Check if the first value is positive, negative, or zero
    if (first_value > 0) {
        printf("%d is positive.\n", first_value);
    } else if (first_value < 0) {
        printf("%d is negative.\n", first_value);
    } else {
        printf("%d is zero.\n", first_value);
    }

    // Check if the first value is within the range of 2020 to 2023 inclusive
    if (first_value >= 2020 && first_value <= 2023) {
        printf("%d is within the range of 2020 to 2023.\n", first_value);
    } else {
        printf("%d is not within the range of 2020 to 2023.\n", first_value);
    }

    // Get the second value from the user
    printf("Enter the second value: ");
    scanf("%d", &second_value);

    // Compare the second value with the first value
    if (second_value < first_value) {
        printf("The second value is less than the first value.\n");
    } else if (second_value > first_value) {
        printf("The second value is greater than the first value.\n");
    } else {
        printf("The second value is equal to the first value.\n");
    }

    printf("This program will ask a user for credits and presumed year in college.")

    // Get the number of credits from the user
    printf("Enter number of credits: ");
    scanf("%f", &credits);

    // Get the anticipated year from the user
    printf("Enter anticipated year (Freshman, Sophomore, Junior, Senior): ");
    scanf("%s", year);

    // Check if the anticipated year is correct based on the number of credits
    if (credits >= 0 && credits <= 23) {
        strcpy(correct_year, "Freshman");
    } else if (credits >= 24 && credits <= 59) {
        strcpy(correct_year, "Sophomore");
    } else if (credits >= 60 && credits <= 89) {
        strcpy(correct_year, "Junior");
    } else if (credits >= 90) {
        strcpy(correct_year, "Senior");
    }

    // Print the result
    if (strcmp(correct_year, year) == 0) {
        printf("A student with %.2f credits is a %s.\n", credits, year);
    } else {
        printf("A student with %.2f credits is not a %s. You are a %s.\n", credits, year, correct_year);
    }

    return 0;
}