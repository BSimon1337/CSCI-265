/*
Beau Simon
beau.a.simon@und.edu
Assignment #1 - C++

This is our first assignment for CSCI 265. This is the C++ portion.
*/

#include <iostream>
#include <string>

int main() {
    std::string first_name;
    std::string last_name;
    std::string address;
    std::string city;
    std::string state;
    std::string zip_code;

    std::cout << "Enter your first name (up to 12 characters): ";
    std::getline(std::cin, first_name);
    std::cout << "Enter your last name (up to 12 characters): ";
    std::getline(std::cin, last_name);
    std::cout << "Enter your address (up to 25 characters): ";
    std::getline(std::cin, address);
    std::cout << "Enter your city (up to 15 characters): ";
    std::getline(std::cin, city);
    std::cout << "Enter your state (2 characters): ";
    std::getline(std::cin, state);
    std::cout << "Enter your zip code (5 characters): ";
    std::getline(std::cin, zip_code);

    // Print the mailing label using only 1 print statement
    std::cout << "\n" << first_name << " " << last_name << "\n"
              << address << "\n"
              << city << ", " << state << "  " << zip_code << "\n\n";

    // Print the mailing label using exactly 3 print statements
    std::cout << first_name << " " << last_name << std::endl;
    std::cout << address << std::endl;
    std::cout << city << ", " << state << "  " << zip_code << "\n\n";

    // Print the mailing label using exactly 6 print statements
    std::cout << first_name << " ";
    std::cout << last_name << std::endl;
    std::cout << address << std::endl;
    std::cout << city << ", ";
    std::cout << state << "  ";
    std::cout << zip_code << "\n\n";
    
    std::cout << "The following section will convert milliseconds into minutes, seconds and milliseconds\n";

    std::cout << "Enter the number of milliseconds: ";
    int milliseconds;
    std::cin >> milliseconds;

    // Calculate minutes, seconds, and remaining milliseconds
    int minutes = milliseconds / 60000;
    int seconds = (milliseconds % 60000) / 1000;
    int remaining_milliseconds = milliseconds % 1000;

    // Display the converted time
    std::cout << "Milliseconds: " << milliseconds << "\n";
    std::cout << "This is " << minutes << " minute(s), " << seconds << " second(s), and "
              << remaining_milliseconds << " millisecond(s).\n\n";
              
    
    std::cout << "The following section will convert coins into dollars and cents\n";
    
    // Convert coins to dollars and cents
    std::cout << "Coins to Dollars Conversion:\n";

    int quarters, dimes, nickels, pennies;
    std::cout << "Enter the number of quarters: ";
    std::cin >> quarters;
    std::cout << "Enter the number of dimes: ";
    std::cin >> dimes;
    std::cout << "Enter the number of nickels: ";
    std::cin >> nickels;
    std::cout << "Enter the number of pennies: ";
    std::cin >> pennies;

    int total_cents = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;
    int dollars = total_cents / 100;
    int cents = total_cents % 100;

    std::cout << "This is equal to $" << dollars << "." << cents << std::endl;

    return 0;
}
