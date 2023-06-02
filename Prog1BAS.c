/*
Beau Simon
beau.a.simon@und.edu
Assignment #1 - C

This is our first assignment for CSCI 265. This is the C portion.
*/

#include <stdio.h>

int main() {
    // Prompt the user for address information
    printf("Enter your first name (up to 12 characters): ");
    char first_name[13];
    scanf("%12s", first_name);

    printf("Enter your last name (up to 12 characters): ");
    char last_name[13];
    scanf("%12s", last_name);

    printf("Enter your address (up to 25 characters): ");
    char address[26];
    scanf(" %25[^\n]", address);

    printf("Enter your city (up to 15 characters): ");
    char city[16];
    scanf("%15s", city);

    printf("Enter your state (2 characters): ");
    char state[3];
    scanf("%2s", state);

    printf("Enter your zip code (5 characters): ");
    char zip_code[6];
    scanf("%5s", zip_code);

    // Print the mailing label using only 1 print statement
    printf("\n%s %s\n%s\n%s, %s  %2s\n\n", first_name, last_name, address, city, state, zip_code);

    // Print the mailing label using exactly 3 print statements
    printf("%s %s\n", first_name, last_name);
    printf("%s\n", address);
    printf("%s, %s  %s\n\n", city, state, zip_code);

    // Print the mailing label using exactly 6 print statements
    printf("%s ", first_name);
    printf("%s\n", last_name);
    printf("%s\n", address);
    printf("%s, ", city);
    printf("%s  ", state);
    printf("%2s\n\n", zip_code);


    printf("The following section will convert milliseconds into minutes, seconds and milliseconds.\n");
    // Convert milliseconds to minutes, seconds, and milliseconds
    printf("Enter the number of milliseconds: ");
    int milliseconds;
    scanf("%d", &milliseconds);

    int minutes = milliseconds / 60000;
    int seconds = (milliseconds % 60000) / 1000;
    int remaining_milliseconds = milliseconds % 1000;

    printf("Milliseconds: %d\n", milliseconds);
    printf("This is %d minute(s), %d second(s), and %d millisecond(s).\n\n", minutes, seconds, remaining_milliseconds);
    
    printf("The following section will convert coins into dollars and cents.\n");

    // Convert coins to dollars and cents
    printf("Enter the number of quarters: ");
    int quarters;
    scanf("%d", &quarters);

    printf("Enter the number of dimes: ");
    int dimes;
    scanf("%d", &dimes);

    printf("Enter the number of nickels: ");
    int nickels;
    scanf("%d", &nickels);

    printf("Enter the number of pennies: ");
    int pennies;
    scanf("%d", &pennies);

    int total_cents = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;
    int dollars = total_cents / 100;
    int cents = total_cents % 100;

    printf("This is equal to $%d.%02d\n", dollars, cents);

    return 0;
}

