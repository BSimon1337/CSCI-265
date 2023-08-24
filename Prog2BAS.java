/*
* Beau Simon
* beau.a.simon@und.edu
* Assignment #2 - Java
* This is our second assignment for CSCI 265. This is the Java portion.
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int firstValue, secondValue;
        float credits;
        String year;
        String correctYear;
        
        System.out.println("This section will ask for two integers");

        // Get the first value from the user
        System.out.print("Enter the first value: ");
        firstValue = scanner.nextInt();

        // Check if the first value is a multiple of 5
        if (firstValue % 5 == 0) {
            System.out.println(firstValue + " is a multiple of 5.");
        } else {
            System.out.println(firstValue + " is not a multiple of 5.");
        }

        // Check if the first value is even or odd
        if (firstValue % 2 == 0) {
            System.out.println(firstValue + " is even.");
        } else {
            System.out.println(firstValue + " is odd.");
        }

        // Check if the first value is positive, negative, or zero
        if (firstValue > 0) {
            System.out.println(firstValue + " is positive.");
        } else if (firstValue < 0) {
            System.out.println(firstValue + " is negative.");
        } else {
            System.out.println(firstValue + " is zero.");
        }

        // Check if the first value is within the range of 2020 to 2023 inclusive
        if (firstValue >= 2020 && firstValue <= 2023) {
            System.out.println(firstValue + " is within the range of 2020 to 2023.");
        } else {
            System.out.println(firstValue + " is not within the range of 2020 to 2023.");
        }

        // Get the second value from the user
        System.out.print("Enter the second value: ");
        secondValue = scanner.nextInt();

        // Compare the second value with the first value
        if (secondValue < firstValue) {
            System.out.println("The second value is less than the first value.");
        } else if (secondValue > firstValue) {
            System.out.println("The second value is greater than the first value.");
        } else {
            System.out.println("The second value is equal to the first value.");
        }
        
        System.out.println("This program will ask a user for credits and presumed year in college.");

        // Get the number of credits from the user
        System.out.print("Enter number of credits: ");
        credits = scanner.nextFloat();

        // Get the anticipated year from the user
        System.out.print("Enter anticipated year(Freshman, Sophomore, Junior, Senior): ");
        year = scanner.next();

        // Check if the anticipated year is correct based on the number of credits
        if (credits >= 0 && credits <= 23) {
            correctYear = "Freshman";
        } else if (credits >= 24 && credits <= 59) {
            correctYear = "Sophomore";
        } else if (credits >= 60 && credits <= 89) {
            correctYear = "Junior";
        } else if (credits >= 90) {
            correctYear = "Senior";
        } else {
            correctYear = "";
        }

        // Print the result
        if (correctYear.equals(year)) {
            System.out.println("A student with " + credits + " credits is a " + year + ".");
        } else if (!correctYear.equals("")) {
            System.out.println("A student with " + credits + " credits is not a " + year + ". You are a " + correctYear + ".");
        } else {
            System.out.println("Invalid number of credits.");
        }

        // Close the scanner
        scanner.close();
    }
}
