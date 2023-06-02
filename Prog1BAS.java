/*
* Beau Simon
* beau.a.simon@und.edu
* Assignment #1 - Java
* This is our first assignment for CSCI 265. This is the Java portion.
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user for address information
        System.out.print("Enter your first name (up to 12 characters): ");
        String firstName = scanner.nextLine();

        System.out.print("Enter your last name (up to 12 characters): ");
        String lastName = scanner.nextLine();

        System.out.print("Enter your address (up to 25 characters): ");
        String address = scanner.nextLine();

        System.out.print("Enter your city (up to 15 characters): ");
        String city = scanner.nextLine();

        System.out.print("Enter your state (2 characters): ");
        String state = scanner.nextLine();

        System.out.print("Enter your zip code (5 characters): ");
        String zipCode = scanner.nextLine();

        // Print the mailing label using only 1 print statement
        System.out.printf("\n%s %s\n%s\n%s, %s  %s\n\n", firstName, lastName, address, city, state, zipCode);

        // Print the mailing label using exactly 3 print statements
        System.out.println(firstName + " " + lastName);
        System.out.println(address);
        System.out.printf("%s, %s  %s\n\n", city, state, zipCode);

        // Print the mailing label using exactly 6 print statements
        System.out.print(firstName + " ");
        System.out.println(lastName);
        System.out.println(address);
        System.out.print(city + ", ");
        System.out.print(state + "  ");
        System.out.println(zipCode + "\n");
        
        System.out.println("The following section will convert milliseconds into minutes, seconds and milliseconds");

        // Convert milliseconds to minutes, seconds, and milliseconds
        System.out.print("Enter the number of milliseconds: ");
        int milliseconds = scanner.nextInt();

        int minutes = milliseconds / 60000;
        int seconds = (milliseconds % 60000) / 1000;
        int remainingMilliseconds = milliseconds % 1000;

        System.out.println("Milliseconds: " + milliseconds);
        System.out.println("This is " + minutes + " minute(s), " + seconds + " second(s), and " + remainingMilliseconds + " millisecond(s).\n");
        
         System.out.println("The following section will convert coins into dollars and cents");

        // Convert coins to dollars and cents
        System.out.print("Enter the number of quarters: ");
        int quarters = scanner.nextInt();

        System.out.print("Enter the number of dimes: ");
        int dimes = scanner.nextInt();

        System.out.print("Enter the number of nickels: ");
        int nickels = scanner.nextInt();

        System.out.print("Enter the number of pennies: ");
        int pennies = scanner.nextInt();

        int totalCents = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;
        int dollars = totalCents / 100;
        int cents = totalCents % 100;

        System.out.printf("This is equal to $%d.%02d\n", dollars, cents);
    }
}
