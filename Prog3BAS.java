/*
* Beau Simon
* beau.a.simon@und.edu
* Assignment #3 - Java
* This is our third assignment for CSCI 265. This is the Java portion.
*/

public class Main {

    public static boolean isOdd(int value) {
        return value % 2 != 0;
    }

    public static boolean isEven(int value) {
        return !isOdd(value);
    }

    public static void multiplicationTable(int multiplier, int numberOfItems) {
        for (int i = 1; i <= numberOfItems; i++) {
            int result = multiplier * i;
            System.out.println(i + " * " + multiplier + " = " + result);
        }
    }

    public static int sumOfOdds(int value) {
        int sum = 0;
        for (int i = 1; i <= value; i++) {
            if (isOdd(i)) {
                sum += i;
            }
        }
        return sum;
    }

    public static boolean isNotAFactor(int value1, int value2) {
        return value1 % value2 != 0;
    }

    public static int valuesBetween(int lower, int upper, int incr) {
        int count = 0;
        for (int i = lower; i <= upper; i += incr) {
            count++;
        }
        return count;
    }

    public static void irTriangle(int side, char character, char fillChar) {
        for (int i = 1; i <= side; i++) {
            if (i == 1 || i == side) {
                String line = new String(new char[i]).replace('\0', character);
                System.out.println(line);
            } else {
                String line = character + new String(new char[i-2]).replace('\0', fillChar) + character;
                System.out.println(line);
            }
        }
    }

    public static void irTriangle(int side, char character) {
        irTriangle(side, character, ' ');
    }

    public static void main(String[] args) {
        // Test isOdd
        System.out.println(isOdd(3));   // Output: true
        System.out.println(isOdd(4));   // Output: false

        // Test isEven
        System.out.println(isEven(3));  // Output: false
        System.out.println(isEven(4));  // Output: true

        // Test multiplicationTable
        multiplicationTable(4, 3);

        // Test sumOfOdds
        System.out.println(sumOfOdds(9));  // Output: 25

        // Test isNotAFactor
        System.out.println(isNotAFactor(10, 3));  // Output: true
        System.out.println(isNotAFactor(10, 2));  // Output: false

        // Test valuesBetween
        System.out.println(valuesBetween(1, 10, 2));  // Output: 5

        // Test irTriangle
        irTriangle(5, '*');
    }
}
