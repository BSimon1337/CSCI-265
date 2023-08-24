/*
* Beau Simon
* beau.a.simon@und.edu
* Assignment #5 - Java
* This is our fifth assignment for CSCI 265. This is the Java portion.
*/

import java.util.ArrayList;
import java.util.HashMap;


public class Main {

    public static boolean addPart(HashMap<String, Integer> parts, String part, int cost) {
        if (parts.containsKey(part)) {
            parts.put(part, cost);
            return false;
        } else {
            parts.put(part, cost);
            return true;
        }
    }

    // Returns the number of unique parts in the data structure.
    public static int totalParts(HashMap<String, Integer> parts) {
        return parts.size();
    }

    // Returns a list of part names with a price greater than or equal to the upperLimit variable.
    public static ArrayList<String> partsGreaterThan(HashMap<String, Integer> parts, int upperLimit) {
        ArrayList<String> result = new ArrayList<>();
        for (String part : parts.keySet()) {
            if (parts.get(part) >= upperLimit) {
                result.add(part);
            }
        }
        return result;
    }

    // Returns true if part is a valid part in the data structure, otherwise return false.
    public static boolean isPart(HashMap<String, Integer> parts, String part) {
        return parts.containsKey(part);
    }

    // Returns the part name with the least expensive price.
    public static String leastExpensivePart(HashMap<String, Integer> parts) {
        if (parts.isEmpty()) {
            return "";
        }
        String minPartName = "";
        int minPrice = Integer.MAX_VALUE;
        for (String part : parts.keySet()) {
            int price = parts.get(part);
            if (price < minPrice) {
                minPrice = price;
                minPartName = part;
            }
        }
        return minPartName;
    }

    // Returns the part name with the most expensive price.
    public static String mostExpensivePart(HashMap<String, Integer> parts) {
        if (parts.isEmpty()) {
            return "";
        }
        String maxPartName = "";
        int maxPrice = Integer.MIN_VALUE;
        for (String part : parts.keySet()) {
            int price = parts.get(part);
            if (price > maxPrice) {
                maxPrice = price;
                maxPartName = part;
            }
        }
        return maxPartName;
    }

    // Returns the average price of all parts in the dictionary.
    public static double averagePrice(HashMap<String, Integer> parts) {
        if (parts.isEmpty()) {
            return -1;
        }
        double sum = 0;
        for (int price : parts.values()) {
            sum += price;
        }
        return sum / parts.size();
    }

    // Writes a table of each part and its price to the display.
    public static void printParts(HashMap<String, Integer> parts) {
        System.out.printf("%-20s%10s%n", "Part", "Price");
        System.out.println("".repeat(30));
        for (String part : parts.keySet()) {
            int price = parts.get(part);
            System.out.printf("%-20s%10d%n", part, price);
        }
    }

    public static void main(String[] args) {
        HashMap<String, Integer> parts = new HashMap<>();
        addPart(parts, "Part 1", 50);
        addPart(parts, "Part 2", 30);
        addPart(parts, "Part 3", 20);
        addPart(parts, "Part 4", 50);
        addPart(parts, "Part 1", 70); // Update the price of Part1
        addPart(parts, "Part 5", 90);

        System.out.println("Total parts: " + totalParts(parts));
        System.out.print("Parts greater than or equal to $30: ");
        ArrayList<String> partsAbove30 = partsGreaterThan(parts, 30);
        for (String part : partsAbove30) {
            System.out.print(part + " ");
        }
        System.out.println();
        System.out.println("Is 'Part 3' a valid part? " + (isPart(parts, "Part 3") ? "Yes" : "No"));
        System.out.println("Least expensive part: " + leastExpensivePart(parts));
        System.out.println("Most expensive part: " + mostExpensivePart(parts));
        System.out.println("Average price of all parts: " + averagePrice(parts));

        System.out.println("Printing parts:");
        printParts(parts);
    }
}
